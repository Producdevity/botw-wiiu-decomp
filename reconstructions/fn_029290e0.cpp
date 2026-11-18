#include "botw/teardown.h"

extern "C" void fn_02550514(void* object, unsigned flags);

extern "C" void fn_029290e0(void* object, unsigned flags) {
    teardown::destroy<fn_02550514, 0, 0>(object, flags);
}
