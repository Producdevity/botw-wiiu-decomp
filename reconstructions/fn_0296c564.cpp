#include "botw/teardown.h"

extern "C" void fn_0296b9e8(void* object, unsigned flags);

extern "C" void fn_0296c564(void* object, unsigned flags) {
    teardown::destroy<fn_0296b9e8, 0, 0>(object, flags);
}
