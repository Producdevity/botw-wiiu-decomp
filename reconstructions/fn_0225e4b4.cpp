#include "botw/teardown.h"

extern "C" void fn_0225e1ac(void* object, unsigned flags);

extern "C" void fn_0225e4b4(void* object, unsigned flags) {
    teardown::destroy<fn_0225e1ac, 0, 0>(object, flags);
}
