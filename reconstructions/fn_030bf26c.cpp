#include "botw/teardown.h"

extern "C" void fn_030bf26c(void* object, unsigned flags) {
    if (object && (flags & 1))
        fn_0308e6d0(object);
}
