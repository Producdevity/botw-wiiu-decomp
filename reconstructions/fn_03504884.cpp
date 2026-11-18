#include "botw/teardown.h"

extern "C" void fn_0350dfd4(void* object, unsigned flags);

extern "C" void fn_03504884(void* object, unsigned flags) {
    teardown::destroy<fn_0350dfd4, 0, 0>(object, flags);
}
