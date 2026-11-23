#include "botw/ghs_intrinsics.h"
extern "C" void* data_1046bd98;
extern "C" void* data_1046bd94;

extern "C" void fn_030470e4() {
    if (data_1046bd98) {
        void* p = data_1046bd98;
        data_1046bd98 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1046bd94) {
            void* q = data_1046bd94;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_1046bd94 = 0;
    }
}
