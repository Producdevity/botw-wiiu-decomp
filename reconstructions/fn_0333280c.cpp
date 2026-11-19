#include "botw/teardown.h"

extern "C" void fn_0333b26c(void* object, unsigned flags);

extern "C" void fn_0333280c(void* object, unsigned flags) {
    teardown::destroy<fn_0333b26c, 0, 0>(object, flags);
}
