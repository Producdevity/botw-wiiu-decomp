#include "botw/teardown.h"

extern "C" const unsigned char data_101aa9f8[];
extern "C" const unsigned char data_101aaa08[];
extern "C" const unsigned char data_101aaa20[];
extern "C" void fn_02007998(void* object, unsigned flags);

extern "C" void fn_02b06ec8(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        const unsigned char* const dispatch_table_1 = data_101aa9f8;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 0) = dispatch_table_1;
        const unsigned char* const dispatch_table_2 = data_101aaa08;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 240) = dispatch_table_2;
        const unsigned char* const dispatch_table_3 = data_101aaa20;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 236) = dispatch_table_3;
        fn_02007998(object, 0);
        void* const memory = (flags & 1) ? object : 0;
        if (memory)
            fn_0308e6d0(memory);
    }
}
