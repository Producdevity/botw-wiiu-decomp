#include "botw/ghs_intrinsics.h"

namespace {
struct Object {
    char padding_0[0x1C];
    char member[1];
    char padding_1D[0xB];
    const void *table_28;
    char padding_2C[0x24];
    const void *table_50;
};
}

extern "C" unsigned char data_10260520[];
extern "C" unsigned char data_10260540[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0309f8cc(void *arg0);
extern "C" void fn_030a5ab4(void* object, unsigned flags);

extern "C" void fn_030a044c(void* object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        ((Object *)object)->table_50 = data_10260520;
        ((Object *)object)->table_28 = data_10260540;
        fn_0309f8cc(object);
        fn_030a5ab4(((Object *)object)->member, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
