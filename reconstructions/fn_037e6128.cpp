#include "botw/byte_flags.h"

struct LinkedTarget {
    char pad0[0x20];
    void* value;
};

struct LinkedHolder {
    ByteFlags state;
    char pad1[0x7];
    LinkedTarget* target;
};

extern "C" bool fn_037e608c(LinkedHolder* holder);
extern "C" bool fn_037f58b8(LinkedTarget* target);

extern "C" bool fn_037e6128(LinkedHolder* holder) {
    if (!fn_037e5f50(&holder->state)) {
        return false;
    }
    if (fn_037e608c(holder)) {
        return false;
    }
    return holder->target && fn_037f58b8(holder->target);
}
