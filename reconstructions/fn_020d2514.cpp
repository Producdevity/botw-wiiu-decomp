#include "botw/teardown.h"

extern "C" void fn_02100a04(void* object, unsigned flags);

extern "C" void fn_020d2514(void* object, unsigned flags) {
    teardown::destroy<fn_02100a04, 0, 0>(object, flags);
}
