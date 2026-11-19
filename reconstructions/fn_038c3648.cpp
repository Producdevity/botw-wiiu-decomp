#include "botw/teardown.h"

extern "C" void fn_038c3648(void* object, unsigned flags) {
    if (object && (flags & 1))
        fn_0308e6d0(object);
}
