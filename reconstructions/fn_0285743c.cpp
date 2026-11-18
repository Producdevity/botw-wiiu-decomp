#include "botw/teardown.h"

extern "C" void fn_02857880(void* object, unsigned flags);

extern "C" void fn_0285743c(void* object, unsigned flags) {
    teardown::destroy<fn_02857880, 0, 0>(object, flags);
}
