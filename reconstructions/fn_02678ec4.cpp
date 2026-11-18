#include "botw/teardown.h"

extern "C" void fn_0284bc1c(void* object, unsigned flags);

extern "C" void fn_02678ec4(void* object, unsigned flags) {
    teardown::destroy<fn_0284bc1c, 0, 0>(object, flags);
}
