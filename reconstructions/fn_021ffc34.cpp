#include "botw/teardown.h"

extern "C" void fn_021fffd0(void* object, unsigned flags);

extern "C" void fn_021ffc34(void* object, unsigned flags) {
    teardown::destroy<fn_021fffd0, 0, 0>(object, flags);
}
