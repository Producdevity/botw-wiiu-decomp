#include "botw/lookup_payload.h"

extern "C" bool fn_0259fba8(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<8>(owner, output, key);
}
