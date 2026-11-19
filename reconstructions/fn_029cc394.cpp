#include "botw/teardown.h"

extern "C" void fn_029caa3c(void* object, unsigned flags);

extern "C" void fn_029cc394(void* object, unsigned flags) {
    teardown::destroy<fn_029caa3c, 0, 0>(object, flags);
}
