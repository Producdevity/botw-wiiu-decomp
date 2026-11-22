#include "botw/ghs_intrinsics.h"

extern "C" bool fn_0378da88(void* handle);

namespace {

struct Entry {
    unsigned char bytes[16];
};

typedef char EntrySize[sizeof(Entry) == 16 ? 1 : -1];

template <typename T, int N>
struct SafeArray {
    T buffer[N];
    T& operator[](int index) {
        if (static_cast<unsigned int>(index) < N) return buffer[index];
        return buffer[0];
    }
};

struct Owner {
    unsigned char prefix[0x14];
    unsigned char handle[12];
    void* active;
    unsigned char middle[0x6c - 0x24];
    SafeArray<Entry, 3> entries;
};

}

static bool isReady(Owner* owner) {
    return owner->active != 0 && fn_0378da88(owner->handle);
}

extern "C" void* fn_02b1c92c(void* context, unsigned int index) {
    Owner* owner = static_cast<Owner*>(context);
    const unsigned int slot = index;
    __schedule_barrier();
    if (!isReady(owner)) return 0;
    if (slot >= 3) return 0;
    return &owner->entries[slot];
}
