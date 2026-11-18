#include "botw/teardown.h"

extern "C" void fn_0222f1a4(void* object, unsigned flags);

extern "C" void fn_0222fbbc(void* object, unsigned flags) {
    teardown::destroy<fn_0222f1a4, 0, 0>(object, flags);
}
