#include "botw/teardown.h"

extern "C" void fn_0289d3e0(void* object, unsigned flags);

extern "C" void fn_026c81e8(void* object, unsigned flags) {
    teardown::destroy<fn_0289d3e0, 0, 0>(object, flags);
}
