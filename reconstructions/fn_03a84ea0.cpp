#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03a75b14(void* object, unsigned flags);
extern "C" void fn_03a774c4(void* object, unsigned flags);
extern "C" void fn_03a77990(void* object, unsigned flags);
extern "C" void fn_03a84e18(void*);

extern "C" void fn_03a84ea0(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        fn_03a84e18(arg0);
        fn_03a77990((char*)arg0 + 1328, 2U);
        fn_03a774c4((char*)arg0 + 984, 2U);
        fn_03a75b14((char*)arg0 + 920, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
