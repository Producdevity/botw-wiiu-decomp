#include "botw/teardown.h"

extern "C" void fn_02862dd4(void* object, unsigned flags);

extern "C" void fn_0285c22c(void* object, unsigned flags) {
    teardown::destroy<fn_02862dd4, 0, 0>(object, flags);
}
