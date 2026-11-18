#include "botw/teardown.h"

extern "C" void fn_024698d8(void* object, unsigned flags);

extern "C" void fn_0246a5ac(void* object, unsigned flags) {
    teardown::destroy<fn_024698d8, 0, 0>(object, flags);
}
