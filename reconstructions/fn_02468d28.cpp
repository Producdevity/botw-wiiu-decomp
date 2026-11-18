#include "botw/teardown.h"

extern "C" void fn_02181ae8(void* object, unsigned flags);

extern "C" void fn_02468d28(void* object, unsigned flags) {
    teardown::destroy<fn_02181ae8, 0, 0>(object, flags);
}
