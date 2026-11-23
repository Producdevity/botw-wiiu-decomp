#include "botw/ghs_intrinsics.h"

extern "C" void* data_10467bec;
extern "C" void* data_10467be8;

extern "C" void fn_02e2b8dc() {
    if (data_10467bec) {
        void* p = data_10467bec;
        data_10467bec = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_10467be8) {
            void* q = data_10467be8;
            (*(void (**)(void*, int))(*(char**)((char*)q + 48) + 12))(q, 3);
        }
        data_10467be8 = 0;
    }
}
