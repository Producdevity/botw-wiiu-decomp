#include "botw/teardown.h"

extern "C" void fn_026a7f3c(void* object, unsigned flags);

extern "C" void fn_0266f94c(void* object, unsigned flags) {
    teardown::destroy<fn_026a7f3c, 0, 0>(object, flags);
}
