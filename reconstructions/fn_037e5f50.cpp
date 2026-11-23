#include "botw/byte_flags.h"

extern "C" unsigned int fn_037e5f50(const ByteFlags* object) {
    return ((static_cast<unsigned int>(object->value) >> 1) & 0x1u);
}
