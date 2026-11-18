#include "botw/teardown.h"

extern "C" void fn_029cc964(void* object, unsigned flags);

extern "C" void fn_029e4120(void* object, unsigned flags) {
    teardown::destroy<fn_029cc964, 0, 0>(object, flags);
}
