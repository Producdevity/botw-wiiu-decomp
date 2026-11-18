#include "botw/teardown.h"

extern "C" void fn_0220d0bc(void* object, unsigned flags);

extern "C" void fn_0221f9cc(void* object, unsigned flags) {
    teardown::destroy<fn_0220d0bc, 0, 0>(object, flags);
}
