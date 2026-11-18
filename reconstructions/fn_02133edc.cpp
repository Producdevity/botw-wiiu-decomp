#include "botw/ghs_intrinsics.h"

extern "C" void fn_021333d0(void* object);
extern "C" void fn_02133e88(void* object);

extern "C" void fn_02133edc(void* object) {
    __schedule_barrier();
    fn_021333d0(object);
    fn_02133e88(object);
}
