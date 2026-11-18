#include "botw/teardown.h"

extern "C" void fn_02436ad4(void* object, unsigned flags);

extern "C" void fn_0243ac7c(void* object, unsigned flags) {
    teardown::destroy<fn_02436ad4, 0, 0>(object, flags);
}
