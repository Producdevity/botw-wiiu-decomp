#include "botw/teardown.h"

extern "C" void fn_02468d28(void* object, unsigned flags);

extern "C" void fn_0235ce78(void* object, unsigned flags) {
    teardown::destroy<fn_02468d28, 0, 0>(object, flags);
}
