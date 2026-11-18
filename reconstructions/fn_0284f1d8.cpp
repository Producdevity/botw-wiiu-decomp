#include "botw/teardown.h"

extern "C" void fn_02851b44(void* object, unsigned flags);

extern "C" void fn_0284f1d8(void* object, unsigned flags) {
    teardown::destroy<fn_02851b44, 0, 0>(object, flags);
}
