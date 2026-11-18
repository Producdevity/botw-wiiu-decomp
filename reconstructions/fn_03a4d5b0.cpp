#include "botw/teardown.h"

extern "C" void fn_030a5064(void* object, unsigned flags);

extern "C" void fn_03a4d5b0(void* object, unsigned flags) {
    teardown::destroy<fn_030a5064, 0, 0>(object, flags);
}
