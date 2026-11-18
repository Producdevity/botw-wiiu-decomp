#include "botw/lookup_payload.h"

extern "C" bool fn_028ba564(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<8>(owner, output, key);
}
