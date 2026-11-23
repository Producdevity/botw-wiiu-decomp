#include "botw/byaml_iter.h"

extern "C" bool fn_0396c42c(const ByamlIter* iter, int* value, const ByamlData* data);

extern "C" bool fn_0396c450(const ByamlIter* iter, int* value, const char* key) {
    ByamlData data;
    fn_0396cf14(&data);
    if (fn_0396c0c0(iter, &data, key) && fn_0396c42c(iter, value, &data))
        return true;
    return false;
}
