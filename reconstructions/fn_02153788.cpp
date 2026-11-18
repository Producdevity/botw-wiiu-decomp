#include "botw/teardown.h"

extern "C" void fn_0215314c(void* object, unsigned flags);

extern "C" void fn_02153788(void* object, unsigned flags) {
    teardown::destroy<fn_0215314c, 0, 0>(object, flags);
}
