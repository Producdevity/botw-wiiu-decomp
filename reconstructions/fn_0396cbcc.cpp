#include "botw/byaml_iter.h"

extern "C" bool fn_0396c764(const ByamlIter* iter, ByamlData* data, const char* key);

extern "C" bool fn_0396c42c(const ByamlIter* iter, int* value, const ByamlData* data);

extern "C" bool fn_0396cbcc(const ByamlIter* iter, int* value, const char* key) {
    ByamlData data;
    fn_0396cf14(&data);
    if (fn_0396c764(iter, &data, key) && fn_0396c42c(iter, value, &data))
        return true;
    return false;
}
