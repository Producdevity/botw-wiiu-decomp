#include "botw/byaml_iter.h"

extern "C" bool fn_030e5570(const ByamlIter* iter, int* value, const char* key);

extern "C" void fn_0311e864(int* value, const ByamlIter* iter, const char* key) {
    fn_030e5570(iter, value, key);
}
