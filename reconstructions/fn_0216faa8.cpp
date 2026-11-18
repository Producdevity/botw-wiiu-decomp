#include "botw/teardown.h"

extern "C" void fn_021072d8(void* object, unsigned flags);

extern "C" void fn_0216faa8(void* object, unsigned flags) {
    teardown::destroy<fn_021072d8, 0, 0>(object, flags);
}
