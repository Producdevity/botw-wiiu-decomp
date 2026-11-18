#include "botw/teardown.h"

extern "C" void fn_022316e4(void* object, unsigned flags);

extern "C" void fn_0220e1c4(void* object, unsigned flags) {
    teardown::destroy<fn_022316e4, 0, 0>(object, flags);
}
