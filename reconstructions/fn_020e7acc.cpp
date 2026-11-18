#include "botw/lookup_payload.h"

extern "C" bool fn_020e7acc(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<4>(owner, output, key);
}
