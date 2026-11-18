#include "botw/teardown.h"

extern "C" void fn_02848cb0(void* object, unsigned flags);

extern "C" void fn_0255f124(void* object, unsigned flags) {
    teardown::destroy<fn_02848cb0, 0, 0>(object, flags);
}
