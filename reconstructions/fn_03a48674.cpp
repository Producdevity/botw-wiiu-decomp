#include "botw/teardown.h"

extern "C" void fn_03c49a34(void* object, unsigned flags);

extern "C" void fn_03a48674(void* object, unsigned flags) {
    teardown::destroy<fn_03c49a34, 0, 0>(object, flags);
}
