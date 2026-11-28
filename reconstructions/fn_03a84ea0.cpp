#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03a75b14(void* object, unsigned flags);
extern "C" void fn_03a774c4(void* object, unsigned flags);
extern "C" void fn_03a77990(void* object, unsigned flags);
extern "C" void fn_03a84e18(void*);

extern "C" void fn_03a84ea0(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_03a84e18(object);
        fn_03a77990((char*)object + 1328, 2U);
        fn_03a774c4((char*)object + 984, 2U);
        fn_03a75b14((char*)object + 920, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
