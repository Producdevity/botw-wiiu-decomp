#include "botw/ghs_intrinsics.h"

extern "C" void* data_104637c4;
extern "C" char* data_104637c0;

extern "C" void fn_02a30804() {
    if (data_104637c4) {
        void* p = data_104637c4;
        data_104637c4 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_104637c0) {
            void* q = (void*)data_104637c0;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_104637c0 = 0;
    }
}
