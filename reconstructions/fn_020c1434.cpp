#include "botw/teardown.h"

extern "C" void fn_021e7c20(void* object, unsigned flags);

extern "C" void fn_020c1434(void* object, unsigned flags) {
    teardown::destroy<fn_021e7c20, 0, 0>(object, flags);
}
