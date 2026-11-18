#include "botw/teardown.h"

extern "C" void fn_0325f420(void* object, unsigned flags);

extern "C" void fn_0325f014(void* object, unsigned flags) {
    teardown::destroy<fn_0325f420, 0, 0>(object, flags);
}
