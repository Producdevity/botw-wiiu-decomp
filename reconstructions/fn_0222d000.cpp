#include "botw/teardown.h"

extern "C" void fn_0222a804(void* object, unsigned flags);

extern "C" void fn_0222d000(void* object, unsigned flags) {
    teardown::destroy<fn_0222a804, 0, 0>(object, flags);
}
