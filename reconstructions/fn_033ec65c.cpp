#include "botw/ghs_intrinsics.h"

extern "C" void* data_1046f380;
extern "C" void* data_1046f37c;

extern "C" void fn_033ec65c() {
    if (data_1046f380) {
        void* p = data_1046f380;
        data_1046f380 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1046f37c) {
            void* q = data_1046f37c;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1046f37c = 0;
    }
}
