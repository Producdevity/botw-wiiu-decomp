#include "botw/teardown.h"

extern "C" void fn_022594e8(void* object, unsigned flags);

extern "C" void fn_02259830(void* object, unsigned flags) {
    teardown::destroy<fn_022594e8, 0, 0>(object, flags);
}
