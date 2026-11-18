#include "botw/teardown.h"

extern "C" void fn_0399a700(void* object, unsigned flags);

extern "C" void fn_0399a7a0(void* object, unsigned flags) {
    teardown::destroy<fn_0399a700, 0, 0>(object, flags);
}
