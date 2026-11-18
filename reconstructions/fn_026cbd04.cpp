#include "botw/teardown.h"

extern "C" void fn_025a872c(void* object, unsigned flags);

extern "C" void fn_026cbd04(void* object, unsigned flags) {
    teardown::destroy<fn_025a872c, 0, 0>(object, flags);
}
