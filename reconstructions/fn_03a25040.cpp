#include "botw/teardown.h"

extern "C" void fn_030dfefc(void* object, unsigned flags);

extern "C" void fn_03a25040(void* object, unsigned flags) {
    teardown::destroy<fn_030dfefc, 0, 0>(object, flags);
}
