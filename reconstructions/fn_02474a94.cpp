#include "botw/teardown.h"

extern "C" const unsigned char data_100bf384[];
extern "C" const unsigned char data_100bf394[];
extern "C" const unsigned char data_100bf3ac[];
extern "C" void fn_02af3f8c(void* object, unsigned flags);

extern "C" void fn_02474a94(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        const unsigned char* const dispatch_table_1 = data_100bf384;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 0) = dispatch_table_1;
        const unsigned char* const dispatch_table_2 = data_100bf394;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 240) = dispatch_table_2;
        const unsigned char* const dispatch_table_3 = data_100bf3ac;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 236) = dispatch_table_3;
        fn_02af3f8c(object, 0);
        void* const memory = (flags & 1) ? object : 0;
        if (memory)
            fn_0308e6d0(memory);
    }
}
