#include "botw/teardown.h"

extern "C" void fn_021e703c(void* object, unsigned flags);

extern "C" void fn_02226a88(void* object, unsigned flags) {
    teardown::destroy<fn_021e703c, 0, 0>(object, flags);
}
