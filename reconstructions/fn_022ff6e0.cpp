#include "botw/teardown.h"

extern "C" void fn_022ffa0c(void* object, unsigned flags);

extern "C" void fn_022ff6e0(void* object, unsigned flags) {
    teardown::destroy<fn_022ffa0c, 0, 0>(object, flags);
}
