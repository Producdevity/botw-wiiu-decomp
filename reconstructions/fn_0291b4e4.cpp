#include "botw/teardown.h"

extern "C" void fn_0291a998(void* object, unsigned flags);

extern "C" void fn_0291b4e4(void* object, unsigned flags) {
    teardown::destroy<fn_0291a998, 0, 0>(object, flags);
}
