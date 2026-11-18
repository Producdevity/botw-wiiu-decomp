#include "botw/teardown.h"

extern "C" void fn_021d04d8(void* object, unsigned flags);

extern "C" void fn_021d0aa8(void* object, unsigned flags) {
    teardown::destroy<fn_021d04d8, 0, 0>(object, flags);
}
