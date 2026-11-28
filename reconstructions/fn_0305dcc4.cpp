#include "botw/byte_flags.h"

typedef unsigned char u8;
typedef int s32;

extern "C" int fn_037e71a0(void*);

extern "C" u8 fn_0305dcc4(ByteFlags *flags) {
    s32 result;

    result = 0;
    if ((flags != 0) && (fn_037e5f50(flags) != 0) && (fn_037e71a0(flags) != 0)) {
        result = 1;
    }
    return result;
}
