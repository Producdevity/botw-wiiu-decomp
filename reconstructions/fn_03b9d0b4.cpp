#include "botw/teardown.h"

extern "C" void fn_03b9d004(void* accessor);

extern "C" void fn_03b9d0b4(void* accessor, int flags) {
    if (accessor) {
        fn_03b9d004(accessor);
        if (flags & 1)
            fn_0308e6d0(accessor);
    }
}
