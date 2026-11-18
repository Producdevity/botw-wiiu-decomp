#include "botw/teardown.h"

extern "C" void fn_0214042c(void* object, unsigned flags);

extern "C" void fn_021409b8(void* object, unsigned flags) {
    teardown::destroy<fn_0214042c, 0, 0>(object, flags);
}
