#include "botw/teardown.h"

extern "C" void fn_0314e988(void* object, unsigned flags);

extern "C" void fn_0314ece0(void* object, unsigned flags) {
    teardown::destroy<fn_0314e988, 0, 0>(object, flags);
}
