#include "botw/teardown.h"

extern "C" void fn_029dcf60(void* object, unsigned flags);

extern "C" void fn_029dcb94(void* object, unsigned flags) {
    teardown::destroy<fn_029dcf60, 0, 0>(object, flags);
}
