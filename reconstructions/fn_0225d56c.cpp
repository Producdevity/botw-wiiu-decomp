#include "botw/teardown.h"

extern "C" void fn_0225d218(void* object, unsigned flags);

extern "C" void fn_0225d56c(void* object, unsigned flags) {
    teardown::destroy<fn_0225d218, 0, 0>(object, flags);
}
