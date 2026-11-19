#include "botw/teardown.h"

extern "C" void fn_02e91254(void* object, unsigned flags);

extern "C" void fn_02e98d1c(void* object, unsigned flags) {
    teardown::destroy<fn_02e91254, 0, 0>(object, flags);
}
