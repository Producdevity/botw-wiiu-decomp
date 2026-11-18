#include "botw/teardown.h"

extern "C" void fn_02216f28(void* object, unsigned flags);

extern "C" void fn_021f96b8(void* object, unsigned flags) {
    teardown::destroy<fn_02216f28, 0, 0>(object, flags);
}
