#include "botw/teardown.h"

extern "C" void fn_038d574c(void* object, unsigned flags);

extern "C" void fn_034852c8(void* object, unsigned flags) {
    teardown::destroy<fn_038d574c, 0, 0>(object, flags);
}
