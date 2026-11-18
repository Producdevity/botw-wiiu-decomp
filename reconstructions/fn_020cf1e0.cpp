#include "botw/teardown.h"

extern "C" void fn_020cf58c(void* object, unsigned flags);

extern "C" void fn_020cf1e0(void* object, unsigned flags) {
    teardown::destroy<fn_020cf58c, 0, 0>(object, flags);
}
