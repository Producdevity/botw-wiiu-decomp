#include "botw/teardown.h"

extern "C" void fn_02280790(void* object, unsigned flags);

extern "C" void fn_020c3634(void* object, unsigned flags) {
    teardown::destroy<fn_02280790, 0, 0>(object, flags);
}
