#include "botw/object_handle_pair.h"

extern "C" void fn_03ba03d8(void* owner, void* key, ObjectHandlePair* result);

extern "C" ObjectHandlePair fn_03b9117c(void* owner, void* key) {
    ObjectHandlePair result;
    result.object = 0;
    result.token = 0;
    fn_03ba03d8(owner, key, &result);
    return result;
}
