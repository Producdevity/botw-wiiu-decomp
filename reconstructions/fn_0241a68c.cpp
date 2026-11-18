#include "botw/teardown.h"

extern "C" void fn_02419b50(void* object, unsigned flags);

extern "C" void fn_0241a68c(void* object, unsigned flags) {
    teardown::destroy<fn_02419b50, 0, 0>(object, flags);
}
