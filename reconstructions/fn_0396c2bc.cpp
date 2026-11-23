#include "botw/byaml_iter.h"
#include "botw/ghs_intrinsics.h"

extern "C" void fn_0396c1dc(const ByamlIter* iter, ByamlData* data, const char* key);

extern "C" bool fn_0396c2bc(const ByamlIter* iter, ByamlData* data, const char* key)
{
    __schedule_barrier();
    ByamlData value;
    fn_0396c1dc(iter, &value, key);
    fn_0396bf1c(data, &value);
    return fn_0396bf60(data);
}
