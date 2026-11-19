#include "botw/ghs_intrinsics.h"

extern "C" const unsigned char data_10263a00;
extern "C" void* fn_0434bff8(void* destination, const void* source, unsigned size, int flush);

namespace {

template <typename Byte> struct Input;

template <typename Byte> struct Dispatch {
    unsigned long reserved[7];
    void (*terminate)(const Input<Byte>*);
};

template <typename Byte>
inline const Byte& marker_byte() {
    return data_10263a00;
}

template <typename Byte> struct Input {
    enum { limit = 0x80000 };

    const Byte* bytes;
    const Dispatch<Byte>* dispatch;

    void prepare() const {
        dispatch->terminate(this);
    }

    const Byte* prepared() const {
        prepare();
        return bytes;
    }

    int length(const Byte* sentinel, int maximum) const {
        prepare();
        const Byte marker = *sentinel;
        int length = 0;
        for (;;) {
            if (length > maximum || bytes[length] == marker)
                break;
            ++length;
        }
        return length > maximum ? 0 : length;
    }
};

template <typename Byte> struct Output : Input<Byte> {
    int capacity;

    int copy(const Input<Byte>& source, int requested = -1) {
        const Byte* terminator = &marker_byte<Byte>();
        Byte* destination = const_cast<Byte*>(this->bytes);
        const Byte* from = source.prepared();
        if (destination == from)
            return 0;

        int amount = requested;
        if (amount < 0)
            amount = source.length(terminator, Input<Byte>::limit);
        const int bound = capacity;
        if (amount >= bound)
            amount = bound - 1;

        fn_0434bff8(destination, from, static_cast<unsigned>(amount) * sizeof(Byte), 0);
        destination[amount] = *terminator;
        return amount;
    }

    Output& assign(const Input<Byte>& source) {
        copy(source);
        return *this;
    }
};

}

extern "C" Output<unsigned char>* fn_0234c61c(Output<unsigned char>* destination,
                                              const Input<unsigned char>* source) {
    __schedule_barrier();
    return &destination->assign(*source);
}
