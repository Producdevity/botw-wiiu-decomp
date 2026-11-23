#include "botw/byaml_iter.h"

extern "C" bool fn_0396c6c8(const ByamlIter* iter, bool* value, const char* key) {
    ByamlData data;
    fn_0396cf14(&data);
    if (fn_0396c0c0(iter, &data, key) && fn_0396c69c(iter, value, &data))
        return true;
    return false;
}
