#include "botw/teardown.h"

extern "C" void fn_029022ac(void* object, unsigned flags);

extern "C" void fn_0258bd58(void* object, unsigned flags) {
    teardown::destroy<fn_029022ac, 0, 0>(object, flags);
}
