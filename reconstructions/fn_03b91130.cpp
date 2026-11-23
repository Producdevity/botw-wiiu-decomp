#include "botw/object_handle_pair.h"

extern "C" ObjectHandlePair fn_03b91130(void* owner, void* key) {
    ObjectHandlePair result;
    result.object = 0;
    result.token = 0;
    fn_03ba0660(owner, key, &result);
    return result;
}
