#include "botw/lookup_payload.h"

extern "C" bool fn_023531dc(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<1>(owner, output, key);
}
