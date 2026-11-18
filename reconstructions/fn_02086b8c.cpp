#include "botw/teardown.h"

extern "C" void fn_020863b8(void* object, unsigned flags);

extern "C" void fn_02086b8c(void* object, unsigned flags) {
    teardown::destroy<fn_020863b8, 0, 0>(object, flags);
}
