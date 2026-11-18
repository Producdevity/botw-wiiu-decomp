#include "botw/teardown.h"

extern "C" void fn_034ca8a0(void* object, unsigned flags);

extern "C" void fn_034cc278(void* object, unsigned flags) {
    teardown::destroy<fn_034ca8a0, 0, 0>(object, flags);
}
