#include "botw/teardown.h"

extern "C" void fn_0237aebc(void* object, unsigned flags);

extern "C" void fn_02380da8(void* object, unsigned flags) {
    teardown::destroy<fn_0237aebc, 0, 0>(object, flags);
}
