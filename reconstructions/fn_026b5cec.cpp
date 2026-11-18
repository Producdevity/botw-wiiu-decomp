#include "botw/lookup_payload.h"

extern "C" bool fn_026b5cec(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<2>(owner, output, key);
}
