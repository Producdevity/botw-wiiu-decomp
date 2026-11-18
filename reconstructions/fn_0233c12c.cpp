#include "botw/teardown.h"

extern "C" void fn_0233ab60(void* object, unsigned flags);

extern "C" void fn_0233c12c(void* object, unsigned flags) {
    teardown::destroy<fn_0233ab60, 0, 0>(object, flags);
}
