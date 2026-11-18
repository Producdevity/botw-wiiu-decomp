#include "botw/teardown.h"

extern "C" void fn_02744a64(void* object, unsigned flags);

extern "C" void fn_027464b0(void* object, unsigned flags) {
    teardown::destroy<fn_02744a64, 0, 0>(object, flags);
}
