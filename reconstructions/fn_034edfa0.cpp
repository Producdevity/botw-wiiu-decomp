#include "botw/byte_flags.h"

extern "C" unsigned int fn_037e5f50(const ByteFlags* object);

extern "C" unsigned int fn_034edfa0(char* value) {
    return fn_037e5f50((const ByteFlags*)(value + 160));
}
