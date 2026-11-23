#include "botw/ghs_intrinsics.h"

extern "C" void* data_10469a34;
extern "C" char * data_10469a30;

extern "C" void fn_02ec2e88() {
    if (data_10469a34) {
        void* p = data_10469a34;
        data_10469a34 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_10469a30) {
            void* q = (void*)data_10469a30;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_10469a30 = 0;
    }
}
