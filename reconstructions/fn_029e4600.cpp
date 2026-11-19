#include "botw/teardown.h"

extern "C" void fn_029e4120(void* object, unsigned flags);

extern "C" void fn_029e4600(void* object, unsigned flags) {
    teardown::destroy<fn_029e4120, 0, 0>(object, flags);
}
