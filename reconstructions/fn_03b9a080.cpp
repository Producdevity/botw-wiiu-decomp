#include "botw/teardown.h"

extern "C" void fn_03ba3634(void* object, unsigned flags);

extern "C" void fn_03b9a080(void* object, unsigned flags) {
    teardown::destroy<fn_03ba3634, 0, 0>(object, flags);
}
