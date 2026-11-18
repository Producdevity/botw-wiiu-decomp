#include "botw/teardown.h"

extern "C" void fn_02226e7c(void* object, unsigned flags);

extern "C" void fn_021e703c(void* object, unsigned flags) {
    teardown::destroy<fn_02226e7c, 0, 0>(object, flags);
}
