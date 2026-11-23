#include "botw/ghs_intrinsics.h"

extern "C" void* data_104637b0;
extern "C" void *data_104637ac;

extern "C" void fn_02a2f858() {
    if (data_104637b0) {
        void* p = data_104637b0;
        data_104637b0 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_104637ac) {
            void* q = data_104637ac;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_104637ac = 0;
    }
}
