#include "botw/lookup_payload.h"

extern "C" bool fn_02cf9828(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<11>(owner, output, key);
}
