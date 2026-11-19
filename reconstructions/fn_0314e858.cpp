#include "botw/teardown.h"

extern "C" void fn_0314e69c(void* object, unsigned flags);

extern "C" void fn_0314e858(void* object, unsigned flags) {
    teardown::destroy<fn_0314e69c, 0, 0>(object, flags);
}
