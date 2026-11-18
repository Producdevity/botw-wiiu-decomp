#include "botw/teardown.h"

extern "C" void fn_024099a0(void* object, unsigned flags);

extern "C" void fn_02408da4(void* object, unsigned flags) {
    teardown::destroy<fn_024099a0, 0, 0>(object, flags);
}
