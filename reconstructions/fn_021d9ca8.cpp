#include "botw/teardown.h"

extern "C" void fn_021d81a8(void* object, unsigned flags);

extern "C" void fn_021d9ca8(void* object, unsigned flags) {
    teardown::destroy<fn_021d81a8, 0, 0>(object, flags);
}
