#include "botw/teardown.h"

extern "C" void fn_0241a68c(void* object, unsigned flags);

extern "C" void fn_0224fb14(void* object, unsigned flags) {
    teardown::destroy<fn_0241a68c, 0, 0>(object, flags);
}
