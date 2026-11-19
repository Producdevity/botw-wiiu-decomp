#include "botw/teardown.h"

extern "C" const unsigned char data_102b89a0[];
extern "C" const unsigned char data_102b89b0[];
extern "C" const unsigned char data_102b89c8[];
extern "C" void fn_03796418(void* object, unsigned flags);

extern "C" void fn_0338f93c(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        const unsigned char* const dispatch_table_1 = data_102b89a0;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 0) = dispatch_table_1;
        const unsigned char* const dispatch_table_2 = data_102b89b0;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 240) = dispatch_table_2;
        const unsigned char* const dispatch_table_3 = data_102b89c8;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 236) = dispatch_table_3;
        fn_03796418(object, 0);
        void* const memory = (flags & 1) ? object : 0;
        if (memory)
            fn_0308e6d0(memory);
    }
}
