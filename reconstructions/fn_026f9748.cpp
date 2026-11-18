#include "botw/ghs_intrinsics.h"

extern "C" void fn_02592d54(void* object);
extern "C" void fn_026f8144(void* object);

extern "C" void fn_026f9748(void* object) {
    __schedule_barrier();
    fn_02592d54(object);
    fn_026f8144(object);
}
