#include "botw/teardown.h"

extern "C" void fn_03929990(void* object, unsigned flags);

extern "C" void fn_0370a8a4(void* object, unsigned flags) {
    teardown::destroy<fn_03929990, 0, 0>(object, flags);
}
