#include "botw/teardown.h"

extern "C" void fn_03112434(void* object, unsigned flags);

extern "C" void fn_02158804(void* object, unsigned flags) {
    teardown::destroy<fn_03112434, 0, 0>(object, flags);
}
