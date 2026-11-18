#include "botw/ghs_intrinsics.h"

extern "C" void fn_02366f60(void* object);
extern "C" void fn_023fec98(void* object);

extern "C" void fn_02367080(void* object) {
    __schedule_barrier();
    fn_02366f60(object);
    fn_023fec98(object);
}
