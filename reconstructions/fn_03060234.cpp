#include "botw/teardown.h"

extern "C" const unsigned char data_1025acbc[];
extern "C" const unsigned char data_1025accc[];
extern "C" const unsigned char data_1025ace4[];
extern "C" void fn_03605650(void* object, unsigned flags);

extern "C" void fn_03060234(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        const unsigned char* const dispatch_table_1 = data_1025acbc;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 16) = dispatch_table_1;
        const unsigned char* const dispatch_table_2 = data_1025accc;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 168) = dispatch_table_2;
        const unsigned char* const dispatch_table_3 = data_1025ace4;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 164) = dispatch_table_3;
        fn_03605650(object, 0);
        void* const memory = (flags & 1) ? object : 0;
        if (memory)
            fn_0308e6d0(memory);
    }
}
