#include "botw/teardown.h"

extern "C" void fn_029c8610(void* object, unsigned flags);

extern "C" void fn_029c421c(void* object, unsigned flags) {
    teardown::destroy<fn_029c8610, 0, 0>(object, flags);
}
