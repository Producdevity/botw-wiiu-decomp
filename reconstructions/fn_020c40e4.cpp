#include "botw/teardown.h"

extern "C" void fn_02283af0(void* object, unsigned flags);

extern "C" void fn_020c40e4(void* object, unsigned flags) {
    teardown::destroy<fn_02283af0, 0, 0>(object, flags);
}
