#include "botw/teardown.h"

extern "C" void fn_030eb1e0(void* object, unsigned flags) {
    if (object && (flags & 1))
        fn_0308e6d0(object);
}
