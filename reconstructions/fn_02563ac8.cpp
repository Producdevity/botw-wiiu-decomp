#include "botw/teardown.h"

extern "C" void fn_02563440(void* object, unsigned flags);

extern "C" void fn_02563ac8(void* object, unsigned flags) {
    teardown::destroy<fn_02563440, 0, 0>(object, flags);
}
