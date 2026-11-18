#include "botw/lookup_payload.h"

extern "C" bool fn_02187c5c(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<8>(owner, output, key);
}
