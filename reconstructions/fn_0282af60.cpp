#include "botw/teardown.h"

extern "C" void fn_028249c8(void* object, unsigned flags);

extern "C" void fn_0282af60(void* object, unsigned flags) {
    teardown::destroy<fn_028249c8, 0, 0>(object, flags);
}
