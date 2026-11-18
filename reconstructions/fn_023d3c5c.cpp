#include "botw/lookup_payload.h"

extern "C" bool fn_023d3c5c(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<3>(owner, output, key);
}
