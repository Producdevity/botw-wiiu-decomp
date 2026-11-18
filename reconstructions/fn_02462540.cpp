#include "botw/teardown.h"

extern "C" void fn_0245a92c(void* object, unsigned flags);

extern "C" void fn_02462540(void* object, unsigned flags) {
    teardown::destroy<fn_0245a92c, 0, 0>(object, flags);
}
