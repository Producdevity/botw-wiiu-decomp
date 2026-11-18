#include "botw/teardown.h"

extern "C" void fn_0292be84(void* object, unsigned flags);

extern "C" void fn_0292b7c0(void* object, unsigned flags) {
    teardown::destroy<fn_0292be84, 0, 0>(object, flags);
}
