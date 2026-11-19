#include "botw/teardown.h"

extern "C" void fn_03bfc2a4(void* object, unsigned flags) {
    if (object && (flags & 1))
        fn_0308e6d0(object);
}
