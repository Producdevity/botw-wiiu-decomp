#include "botw/object_handle_pair.h"
extern "C" void fn_03b883a8(void* owner, void* key, ObjectHandlePair* result);

extern "C" ObjectHandlePair fn_03b88404(void* owner, void* key) {
    ObjectHandlePair result;
    result.object = 0;
    result.token = 0;
    fn_03b883a8(owner, key, &result);
    return result;
}
