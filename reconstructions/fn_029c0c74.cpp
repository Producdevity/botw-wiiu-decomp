#include "botw/teardown.h"

extern "C" void fn_029c03e4(void* object, unsigned flags);

extern "C" void fn_029c0c74(void* object, unsigned flags) {
    teardown::destroy<fn_029c03e4, 0, 0>(object, flags);
}
