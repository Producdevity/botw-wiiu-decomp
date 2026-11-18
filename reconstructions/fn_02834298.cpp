#include "botw/teardown.h"

extern "C" void fn_0282fe60(void* object, unsigned flags);

extern "C" void fn_02834298(void* object, unsigned flags) {
    teardown::destroy<fn_0282fe60, 0, 0>(object, flags);
}
