#include "botw/teardown.h"

extern "C" void fn_02343280(void* object, unsigned flags);

extern "C" void fn_02343698(void* object, unsigned flags) {
    teardown::destroy<fn_02343280, 0, 0>(object, flags);
}
