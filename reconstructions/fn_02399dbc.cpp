#include "botw/lookup_payload.h"

extern "C" bool fn_02399dbc(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<1>(owner, output, key);
}
