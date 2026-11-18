#include "botw/teardown.h"

extern "C" void fn_0280c3cc(void* object, unsigned flags);

extern "C" void fn_0280195c(void* object, unsigned flags) {
    teardown::destroy<fn_0280c3cc, 0, 0>(object, flags);
}
