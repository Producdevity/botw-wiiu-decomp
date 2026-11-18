#include "botw/teardown.h"

extern "C" void fn_025654ac(void* object, unsigned flags);

extern "C" void fn_02741f20(void* object, unsigned flags) {
    teardown::destroy<fn_025654ac, 0, 0>(object, flags);
}
