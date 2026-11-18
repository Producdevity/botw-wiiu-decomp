#include "botw/teardown.h"

extern "C" void fn_02b151f8(void* object, unsigned flags);

extern "C" void fn_02b1b04c(void* object, unsigned flags) {
    teardown::destroy<fn_02b151f8, 0, 0>(object, flags);
}
