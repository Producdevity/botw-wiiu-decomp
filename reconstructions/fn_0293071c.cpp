#include "botw/teardown.h"

extern "C" void fn_02787c3c(void* object, unsigned flags);

extern "C" void fn_0293071c(void* object, unsigned flags) {
    teardown::destroy<fn_02787c3c, 0, 0>(object, flags);
}
