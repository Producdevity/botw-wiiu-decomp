#include "botw/teardown.h"

extern "C" void fn_021ec7f0(void* object, unsigned flags);

extern "C" void fn_021ecaf8(void* object, unsigned flags) {
    teardown::destroy<fn_021ec7f0, 0, 0>(object, flags);
}
