#include "botw/teardown.h"

extern "C" const unsigned char data_1029c65c[];
extern "C" const unsigned char data_1029c66c[];
extern "C" const unsigned char data_1029c684[];
extern "C" void fn_03796418(void* object, unsigned flags);

extern "C" void fn_0327105c(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        const unsigned char* const dispatch_table_1 = data_1029c65c;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 0) = dispatch_table_1;
        const unsigned char* const dispatch_table_2 = data_1029c66c;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 240) = dispatch_table_2;
        const unsigned char* const dispatch_table_3 = data_1029c684;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 236) = dispatch_table_3;
        fn_03796418(object, 0);
        void* const memory = (flags & 1) ? object : 0;
        if (memory)
            fn_0308e6d0(memory);
    }
}
