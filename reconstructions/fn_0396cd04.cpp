#include "botw/byaml_iter.h"

extern "C" bool fn_0396c764(const ByamlIter* iter, ByamlData* data, const char* key);

extern "C" bool fn_0396c5dc(const ByamlIter* iter, float* value, const ByamlData* data);

extern "C" bool fn_0396cd04(const ByamlIter* iter, float* value, const char* key) {
    ByamlData data;
    fn_0396cf14(&data);
    if (fn_0396c764(iter, &data, key) && fn_0396c5dc(iter, value, &data))
        return true;
    return false;
}
