#include "botw/ghs_intrinsics.h"

extern "C" void fn_025d9580(void* object, void* other);
extern "C" void fn_025300a4(void* context);

extern "C" void fn_025300d4(void* context, void* other) {
    __schedule_barrier();
    fn_025d9580(context, other);
    fn_025300a4(context);
}
