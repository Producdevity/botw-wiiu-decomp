#include "botw/teardown.h"

extern "C" void fn_02501de8(void* object, unsigned flags);

extern "C" void fn_024f8b54(void* object, unsigned flags) {
    teardown::destroy<fn_02501de8, 0, 0>(object, flags);
}
