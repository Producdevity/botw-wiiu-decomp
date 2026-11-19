#include "botw/teardown.h"

extern "C" void fn_03580150(void* object, unsigned flags);

extern "C" void fn_0355a03c(void* object, unsigned flags) {
    teardown::destroy<fn_03580150, 0, 0>(object, flags);
}
