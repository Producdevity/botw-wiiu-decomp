#include "botw/teardown.h"

extern "C" void fn_022e764c(void* object, unsigned flags);

extern "C" void fn_02435744(void* object, unsigned flags) {
    teardown::destroy<fn_022e764c, 0, 0>(object, flags);
}
