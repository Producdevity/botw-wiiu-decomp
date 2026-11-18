#include "botw/teardown.h"

extern "C" void fn_021d7d9c(void* object, unsigned flags);

extern "C" void fn_021d90f0(void* object, unsigned flags) {
    teardown::destroy<fn_021d7d9c, 0, 0>(object, flags);
}
