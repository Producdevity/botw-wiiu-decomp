#include "botw/lookup_payload.h"

extern "C" bool fn_024d0c2c(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<3>(owner, output, key);
}
