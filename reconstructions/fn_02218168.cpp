#include "botw/teardown.h"

extern "C" void fn_0221688c(void* object, unsigned flags);

extern "C" void fn_02218168(void* object, unsigned flags) {
    teardown::destroy<fn_0221688c, 0, 0>(object, flags);
}
