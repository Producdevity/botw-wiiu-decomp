#include "botw/teardown.h"

extern "C" void fn_030eb73c(void* object, unsigned flags);

extern "C" void fn_021def60(void* object, unsigned flags) {
    teardown::destroy<fn_030eb73c, 4, 2>(object, flags);
}
