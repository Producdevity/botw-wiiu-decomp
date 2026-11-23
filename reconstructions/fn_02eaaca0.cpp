#include "botw/ghs_intrinsics.h"
struct InferredObject;

extern "C" void* data_10469904;
extern "C" struct InferredObject *data_10469900;

extern "C" void fn_02eaaca0() {
    if (data_10469904) {
        void* p = data_10469904;
        data_10469904 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_10469900) {
            void* q = (void*)data_10469900;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_10469900 = 0;
    }
}
