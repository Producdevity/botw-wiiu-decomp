#include "botw/teardown.h"

extern "C" void fn_0240db68(void* object, unsigned flags);

extern "C" void fn_0240e0b4(void* object, unsigned flags) {
    teardown::destroy<fn_0240db68, 0, 0>(object, flags);
}
