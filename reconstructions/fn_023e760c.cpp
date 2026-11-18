#include "botw/lookup_payload.h"

extern "C" bool fn_023e760c(void* owner, void** output, const void* key) {
    return lookup_copy::lookup_payload<10>(owner, output, key);
}
