#include "botw/teardown.h"

extern "C" void fn_0253b0c4(void* object, unsigned flags);

extern "C" void fn_026b2e4c(void* object, unsigned flags) {
    teardown::destroy<fn_0253b0c4, 0, 0>(object, flags);
}
