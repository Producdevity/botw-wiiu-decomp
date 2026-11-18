#include "botw/teardown.h"

extern "C" void fn_02614c9c(void* object, unsigned flags);

extern "C" void fn_028e9880(void* object, unsigned flags) {
    teardown::destroy<fn_02614c9c, 0, 0>(object, flags);
}
