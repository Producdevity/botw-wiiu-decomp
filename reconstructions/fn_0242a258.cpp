#include "botw/teardown.h"

extern "C" void fn_0242859c(void* object, unsigned flags);

extern "C" void fn_0242a258(void* object, unsigned flags) {
    teardown::destroy<fn_0242859c, 0, 0>(object, flags);
}
