#include "botw/byte_flags.h"

typedef int s32;

extern "C" void fn_037e6fbc(int);

namespace {
struct Owner {
    ByteFlags *flags;
    unsigned char padding_4[8];
    s32 index;
};
}

extern "C" void fn_02ef7c98(void *owner) {
    ByteFlags *flags;

    flags = ((Owner *)owner)->flags;
    if (flags != 0) {
        if (fn_037e5f50(flags) != 0) {
            fn_037e6fbc((s32) ((Owner *)owner)->flags);
        }
        ((Owner *)owner)->index = -1;
    }
}
