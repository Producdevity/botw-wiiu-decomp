#include "botw/teardown.h"

extern "C" void fn_02161e44(void* object, unsigned flags);

extern "C" void fn_021443dc(void* object, unsigned flags) {
    teardown::destroy<fn_02161e44, 0, 0>(object, flags);
}
