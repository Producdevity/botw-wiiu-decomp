#include "botw/teardown.h"

extern "C" void fn_022012c0(void* object, unsigned flags);

extern "C" void fn_021edaf8(void* object, unsigned flags) {
    teardown::destroy<fn_022012c0, 0, 0>(object, flags);
}
