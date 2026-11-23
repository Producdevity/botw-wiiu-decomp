#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047e410;
extern "C" void* data_1047e40c;

extern "C" void fn_03a15fe4() {
    if (data_1047e410) {
        void* p = data_1047e410;
        data_1047e410 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047e40c) {
            void* q = data_1047e40c;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047e40c = 0;
    }
}
