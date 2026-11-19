#include "botw/teardown.h"

extern "C" void fn_02c32c48(void* object, unsigned flags) {
    if (object && (flags & 1))
        fn_0308e6d0(object);
}
