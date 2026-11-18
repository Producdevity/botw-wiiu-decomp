#include "botw/teardown.h"

extern "C" void fn_0291eb48(void* object, unsigned flags);

extern "C" void fn_0291e5c4(void* object, unsigned flags) {
    teardown::destroy<fn_0291eb48, 0, 0>(object, flags);
}
