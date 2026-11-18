#include "botw/teardown.h"

extern "C" void fn_0214e3f8(void* object, unsigned flags);

extern "C" void fn_02265ffc(void* object, unsigned flags) {
    teardown::destroy<fn_0214e3f8, 0, 0>(object, flags);
}
