#include "botw/teardown.h"

extern "C" void fn_039c8fbc(void* object, unsigned flags) {
    if (object && (flags & 1))
        fn_0308e6d0(object);
}
