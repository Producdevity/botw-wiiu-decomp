#include "botw/teardown.h"

extern "C" void fn_0229a24c(void* object, unsigned flags);

extern "C" void fn_02297c74(void* object, unsigned flags) {
    teardown::destroy<fn_0229a24c, 0, 0>(object, flags);
}
