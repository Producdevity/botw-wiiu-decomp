#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047dc08;
extern "C" char* data_1047dc04;

extern "C" void fn_03993410() {
    if (data_1047dc08) {
        void* p = data_1047dc08;
        data_1047dc08 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047dc04) {
            void* q = (void*)data_1047dc04;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047dc04 = 0;
    }
}
