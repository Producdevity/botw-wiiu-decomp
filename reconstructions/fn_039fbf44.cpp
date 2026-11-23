#include "botw/ghs_intrinsics.h"
extern "C" void* data_1047e3f4;
extern "C" void* data_1047e3f0;

extern "C" void fn_039fbf44() {
    if (data_1047e3f4) {
        void* p = data_1047e3f4;
        data_1047e3f4 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047e3f0) {
            void* q = data_1047e3f0;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_1047e3f0 = 0;
    }
}
