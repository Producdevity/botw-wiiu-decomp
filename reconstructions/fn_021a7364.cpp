#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b61568(void* object, unsigned flags);
extern "C" void fn_021aabd8(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_021a7364(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        fn_02b61568(static_cast<unsigned char*>(object) + 40, 2);
        fn_021aabd8(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
