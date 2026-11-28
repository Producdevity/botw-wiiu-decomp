#include "botw/byaml_iter.h"

extern "C" bool fn_0396c764(const ByamlIter* iter, ByamlData* data, const char* key);

extern "C" bool fn_0396c69c(const ByamlIter* iter, bool* value, const ByamlData* data);

extern "C" bool fn_0396cda0(const ByamlIter* iter, bool* value, const char* key) {
    ByamlData data;
    fn_0396cf14(&data);
    if (fn_0396c764(iter, &data, key) && fn_0396c69c(iter, value, &data))
        return true;
    return false;
}
