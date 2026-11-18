#include "botw/teardown.h"

extern "C" void fn_022ce36c(void* object, unsigned flags);

extern "C" void fn_023bda00(void* object, unsigned flags) {
    teardown::destroy<fn_022ce36c, 0, 0>(object, flags);
}
