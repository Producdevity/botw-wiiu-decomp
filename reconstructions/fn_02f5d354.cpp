#include "botw/teardown.h"

extern "C" void fn_0305d994(void* object, unsigned flags);

extern "C" void fn_02f5d354(void* object, unsigned flags) {
    teardown::destroy<fn_0305d994, 4, 2>(object, flags);
}
