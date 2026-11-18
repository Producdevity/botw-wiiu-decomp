#include "botw/teardown.h"

extern "C" void fn_0271d534(void* object, unsigned flags);

extern "C" void fn_028c1b74(void* object, unsigned flags) {
    teardown::destroy<fn_0271d534, 0, 0>(object, flags);
}
