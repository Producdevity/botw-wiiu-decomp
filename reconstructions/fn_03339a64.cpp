#include "botw/teardown.h"

extern "C" void fn_03337194(void* object, unsigned flags);

extern "C" void fn_03339a64(void* object, unsigned flags) {
    teardown::destroy<fn_03337194, 0, 0>(object, flags);
}
