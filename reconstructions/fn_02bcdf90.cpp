#include "botw/lookup_payload.h"

extern "C" bool fn_02bcdf90(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<2>(owner, output, key);
}
