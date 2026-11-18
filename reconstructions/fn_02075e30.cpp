#include "botw/teardown.h"

extern "C" void fn_0224dd18(void* object, unsigned flags);

extern "C" void fn_02075e30(void* object, unsigned flags) {
    teardown::destroy<fn_0224dd18, 0, 0>(object, flags);
}
