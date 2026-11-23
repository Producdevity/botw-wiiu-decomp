#include "botw/ghs_intrinsics.h"
#include "botw/typed_value.h"

extern "C" void fn_0396c824(const void* reader, TypedValue* out, int index);

extern "C" bool fn_0396c904(const void* reader, TypedValue* out, int index)
{
    __schedule_barrier();
    TypedValue value;
    fn_0396c824(reader, &value, index);
    fn_0396bf1c(out, &value);
    return fn_0396bf60(out);
}
