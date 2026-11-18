#include "botw/teardown.h"

extern "C" void fn_021cf834(void* object, unsigned flags);

extern "C" void fn_0207a6f4(void* object, unsigned flags) {
    teardown::destroy<fn_021cf834, 0, 0>(object, flags);
}
