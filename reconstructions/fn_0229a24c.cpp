#include "botw/teardown.h"

extern "C" void fn_0229897c(void* object, unsigned flags);

extern "C" void fn_0229a24c(void* object, unsigned flags) {
    teardown::destroy<fn_0229897c, 0, 0>(object, flags);
}
