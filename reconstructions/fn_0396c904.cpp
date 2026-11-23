#include "botw/byaml_iter.h"
#include "botw/ghs_intrinsics.h"

extern "C" void fn_0396c824(const ByamlIter* iter, ByamlData* data, int index);

extern "C" bool fn_0396c904(const ByamlIter* iter, ByamlData* data, int index)
{
    __schedule_barrier();
    ByamlData value;
    fn_0396c824(iter, &value, index);
    fn_0396bf1c(data, &value);
    return fn_0396bf60(data);
}
