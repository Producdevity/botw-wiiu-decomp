#include "botw/teardown.h"

extern "C" void fn_027392e0(void* object, unsigned flags);

extern "C" void fn_02738f2c(void* object, unsigned flags) {
    teardown::destroy<fn_027392e0, 0, 0>(object, flags);
}
