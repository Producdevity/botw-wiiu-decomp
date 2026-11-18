#include "botw/lookup_payload.h"

extern "C" bool fn_03261d84(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<0>(owner, output, key);
}
