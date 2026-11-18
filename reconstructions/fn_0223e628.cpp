#include "botw/teardown.h"

extern "C" void fn_021eadec(void* object, unsigned flags);

extern "C" void fn_0223e628(void* object, unsigned flags) {
    teardown::destroy<fn_021eadec, 0, 0>(object, flags);
}
