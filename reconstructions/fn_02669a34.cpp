#include "botw/teardown.h"

extern "C" void fn_0251238c(void* object, unsigned flags);

extern "C" void fn_02669a34(void* object, unsigned flags) {
    teardown::destroy<fn_0251238c, 0, 0>(object, flags);
}
