#include "botw/teardown.h"

extern "C" void fn_0281b7a8(void* object, unsigned flags);

extern "C" void fn_0282be3c(void* object, unsigned flags) {
    teardown::destroy<fn_0281b7a8, 0, 0>(object, flags);
}
