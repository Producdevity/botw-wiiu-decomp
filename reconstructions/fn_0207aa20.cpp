#include "botw/teardown.h"

extern "C" void fn_021d2430(void* object, unsigned flags);

extern "C" void fn_0207aa20(void* object, unsigned flags) {
    teardown::destroy<fn_021d2430, 0, 0>(object, flags);
}
