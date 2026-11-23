#include "botw/ghs_intrinsics.h"

extern "C" void* data_1046c958;
extern "C" void* data_1046c954;

extern "C" void fn_030c5ed0() {
    if (data_1046c958) {
        void* p = data_1046c958;
        data_1046c958 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1046c954) {
            void* q = data_1046c954;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1046c954 = 0;
    }
}
