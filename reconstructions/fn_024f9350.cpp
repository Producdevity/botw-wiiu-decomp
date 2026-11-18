#include "botw/teardown.h"

extern "C" void fn_024fb1c4(void* object, unsigned flags);

extern "C" void fn_024f9350(void* object, unsigned flags) {
    teardown::destroy<fn_024fb1c4, 0, 0>(object, flags);
}
