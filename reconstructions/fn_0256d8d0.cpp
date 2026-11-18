#include "botw/teardown.h"

extern "C" void fn_0257937c(void* object, unsigned flags);

extern "C" void fn_0256d8d0(void* object, unsigned flags) {
    teardown::destroy<fn_0257937c, 0, 0>(object, flags);
}
