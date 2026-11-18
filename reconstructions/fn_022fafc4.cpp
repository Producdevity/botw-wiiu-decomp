#include "botw/teardown.h"

extern "C" void fn_022fa430(void* object, unsigned flags);

extern "C" void fn_022fafc4(void* object, unsigned flags) {
    teardown::destroy<fn_022fa430, 0, 0>(object, flags);
}
