#include "botw/byaml_iter.h"

extern "C" bool fn_0396c300(const ByamlIter* iter, const char** value, const ByamlData* data);

extern "C" bool fn_0396c384(const ByamlIter* iter, const char** value, const char* key) {
    ByamlData data;
    fn_0396cf14(&data);
    if (fn_0396c0c0(iter, &data, key) && data.type != 0xff && fn_0396c300(iter, value, &data))
        return true;
    return false;
}
