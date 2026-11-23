#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047ee70;
extern "C" void* data_1047ee6c;

extern "C" void fn_03b4cb44() {
    if (data_1047ee70) {
        void* p = data_1047ee70;
        data_1047ee70 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047ee6c) {
            void* q = data_1047ee6c;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047ee6c = 0;
    }
}
