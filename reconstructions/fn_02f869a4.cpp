#include "botw/teardown.h"

extern "C" const unsigned char data_102351b0[];
extern "C" const unsigned char data_102351c0[];
extern "C" const unsigned char data_102351d8[];
extern "C" void fn_03008534(void* object, unsigned flags);

extern "C" void fn_02f869a4(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        const unsigned char* const dispatch_table_1 = data_102351b0;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 16) = dispatch_table_1;
        const unsigned char* const dispatch_table_2 = data_102351c0;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 168) = dispatch_table_2;
        const unsigned char* const dispatch_table_3 = data_102351d8;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 164) = dispatch_table_3;
        fn_03008534(object, 0);
        void* const memory = (flags & 1) ? object : 0;
        if (memory)
            fn_0308e6d0(memory);
    }
}
