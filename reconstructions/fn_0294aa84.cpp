#include "botw/teardown.h"

extern "C" void fn_025e9764(void* object, unsigned flags);

extern "C" void fn_0294aa84(void* object, unsigned flags) {
    teardown::destroy<fn_025e9764, 0, 0>(object, flags);
}
