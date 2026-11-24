#include "botw/byaml_iter.h"

extern "C" bool fn_0396c450(const ByamlIter* iter, int* value, const char* key);

extern "C" void fn_0396d6e0(int* value, const ByamlIter* iter, const char* key) {
    fn_0396c450(iter, value, key);
}
