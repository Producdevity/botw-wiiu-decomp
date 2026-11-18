#include "botw/teardown.h"

extern "C" void fn_024c2db4(void* object, unsigned flags);

extern "C" void fn_024c30e0(void* object, unsigned flags) {
    teardown::destroy<fn_024c2db4, 0, 0>(object, flags);
}
