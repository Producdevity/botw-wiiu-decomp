#include "botw/teardown.h"

extern "C" void fn_020f4b4c(void* object, unsigned flags);

extern "C" void fn_0210de70(void* object, unsigned flags) {
    teardown::destroy<fn_020f4b4c, 0, 0>(object, flags);
}
