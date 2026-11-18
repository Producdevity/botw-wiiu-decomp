#include "botw/teardown.h"

extern "C" void fn_024328f0(void* object, unsigned flags);

extern "C" void fn_022e764c(void* object, unsigned flags) {
    teardown::destroy<fn_024328f0, 0, 0>(object, flags);
}
