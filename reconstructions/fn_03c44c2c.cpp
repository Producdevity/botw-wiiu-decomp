#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c18c48(void*, void*);

extern "C" void fn_03c44c2c(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    if (arg0 != 0) {
        fn_03c18c48(arg0, 0);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
