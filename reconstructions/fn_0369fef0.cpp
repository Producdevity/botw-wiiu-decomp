#include "botw/teardown.h"

extern "C" void fn_036a00ac(void* object, unsigned flags);

extern "C" void fn_0369fef0(void* object, unsigned flags) {
    teardown::destroy<fn_036a00ac, 0, 0>(object, flags);
}
