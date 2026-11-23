#include "botw/byte_flags.h"

typedef int s32;

extern "C" void fn_037e6fbc(int);

extern "C" void fn_02ef7c98(void *arg0) {
    ByteFlags *temp_r3;

    temp_r3 = (*(ByteFlags **)((char *)(arg0) + (0)));
    if (temp_r3 != 0) {
        if (fn_037e5f50(temp_r3) != 0) {
            fn_037e6fbc((s32) (*(ByteFlags **)((char *)(arg0) + (0))));
        }
        (*(s32 *)((char *)(arg0) + (0xC))) = -1;
    }
}
