#include "botw/teardown.h"

extern "C" void fn_0284889c(void* object, unsigned flags);

extern "C" void fn_0284b58c(void* object, unsigned flags) {
    teardown::destroy<fn_0284889c, 0, 0>(object, flags);
}
