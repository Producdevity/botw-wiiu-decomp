#include "botw/teardown.h"

extern "C" void fn_030bb2cc(void* object, unsigned flags) {
    if (object && (flags & 1))
        fn_0308e6d0(object);
}
