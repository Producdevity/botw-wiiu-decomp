#include "botw/teardown.h"

extern "C" void fn_0251090c(void* object, unsigned flags);

extern "C" void fn_0284bc1c(void* object, unsigned flags) {
    teardown::destroy<fn_0251090c, 0, 0>(object, flags);
}
