#include "botw/teardown.h"

extern "C" void fn_02466430(void* object, unsigned flags);

extern "C" void fn_024658d4(void* object, unsigned flags) {
    teardown::destroy<fn_02466430, 0, 0>(object, flags);
}
