#include "botw/teardown.h"

extern "C" void fn_022e764c(void* object, unsigned flags);

extern "C" void fn_022e7f80(void* object, unsigned flags) {
    teardown::destroy<fn_022e764c, 0, 0>(object, flags);
}
