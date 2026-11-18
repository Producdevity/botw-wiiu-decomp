#include "botw/teardown.h"

extern "C" void fn_030b7184(void* object, unsigned flags);

extern "C" void fn_04214ad4(void* object, unsigned flags) {
    teardown::destroy<fn_030b7184, 0, 0>(object, flags);
}
