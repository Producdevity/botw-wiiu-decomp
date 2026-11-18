#include "botw/ghs_intrinsics.h"

extern "C" void fn_02182aac(void* object);
extern "C" void fn_030ea2cc(void* object);

extern "C" void fn_02182c00(void* object) {
    __schedule_barrier();
    fn_02182aac(object);
    fn_030ea2cc(object);
}
