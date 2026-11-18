#include "botw/teardown.h"

extern "C" void fn_024f19cc(void* object, unsigned flags);

extern "C" void fn_024f24b4(void* object, unsigned flags) {
    teardown::destroy<fn_024f19cc, 0, 0>(object, flags);
}
