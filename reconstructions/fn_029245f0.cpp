#include "botw/teardown.h"

extern "C" void fn_029198b0(void* object, unsigned flags);

extern "C" void fn_029245f0(void* object, unsigned flags) {
    teardown::destroy<fn_029198b0, 0, 0>(object, flags);
}
