#include "botw/teardown.h"

extern "C" void fn_02622004(void* object, unsigned flags);

extern "C" void fn_028f69c0(void* object, unsigned flags) {
    teardown::destroy<fn_02622004, 0, 0>(object, flags);
}
