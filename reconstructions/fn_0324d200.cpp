#include "botw/byte_flags.h"

extern "C" unsigned int fn_0324d200(const ByteFlags* object) {
    return ((static_cast<unsigned int>(object->value) >> 2) & 0x1u);
}
