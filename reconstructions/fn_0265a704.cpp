#include "botw/teardown.h"

extern "C" void fn_02652fd0(void* object, unsigned flags);

extern "C" void fn_0265a704(void* object, unsigned flags) {
    teardown::destroy<fn_02652fd0, 0, 0>(object, flags);
}
