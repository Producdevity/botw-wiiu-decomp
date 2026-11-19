#include "botw/teardown.h"

extern "C" const unsigned char data_10236558[];
extern "C" const unsigned char data_10236568[];
extern "C" const unsigned char data_10236580[];
extern "C" void fn_03008534(void* object, unsigned flags);

extern "C" void fn_02f8b07c(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        const unsigned char* const dispatch_table_1 = data_10236558;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 16) = dispatch_table_1;
        const unsigned char* const dispatch_table_2 = data_10236568;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 168) = dispatch_table_2;
        const unsigned char* const dispatch_table_3 = data_10236580;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 164) = dispatch_table_3;
        fn_03008534(object, 0);
        void* const memory = (flags & 1) ? object : 0;
        if (memory)
            fn_0308e6d0(memory);
    }
}
