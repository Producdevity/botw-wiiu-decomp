#include "botw/teardown.h"

extern "C" void fn_0308f7b8(void* object, unsigned flags);

extern "C" void fn_037d24c4(void* object, unsigned flags) {
    teardown::destroy<fn_0308f7b8, 0, 0>(object, flags);
}
