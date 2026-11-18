#include "botw/teardown.h"

extern "C" void fn_022264f8(void* object, unsigned flags);

extern "C" void fn_021ff4a8(void* object, unsigned flags) {
    teardown::destroy<fn_022264f8, 0, 0>(object, flags);
}
