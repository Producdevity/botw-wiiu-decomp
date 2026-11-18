#include "botw/teardown.h"

extern "C" void fn_026dc51c(void* object, unsigned flags);

extern "C" void fn_02543548(void* object, unsigned flags) {
    teardown::destroy<fn_026dc51c, 0, 0>(object, flags);
}
