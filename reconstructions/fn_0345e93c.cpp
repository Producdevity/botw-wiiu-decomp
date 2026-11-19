#include "botw/teardown.h"

extern "C" void fn_03461a4c(void* object, unsigned flags);

extern "C" void fn_0345e93c(void* object, unsigned flags) {
    teardown::destroy<fn_03461a4c, 0, 0>(object, flags);
}
