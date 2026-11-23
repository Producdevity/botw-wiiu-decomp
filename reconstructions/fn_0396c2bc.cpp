#include "botw/ghs_intrinsics.h"
#include "botw/typed_value.h"

extern "C" void fn_0396c1dc(const void* reader, TypedValue* out, const void* key);

extern "C" bool fn_0396c2bc(const void* reader, TypedValue* out, const void* key)
{
    __schedule_barrier();
    TypedValue value;
    fn_0396c1dc(reader, &value, key);
    fn_0396bf1c(out, &value);
    return fn_0396bf60(out);
}
