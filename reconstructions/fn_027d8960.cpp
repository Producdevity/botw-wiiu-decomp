#include "botw/teardown.h"

extern "C" void fn_027d92c8(void* object, unsigned flags);

extern "C" void fn_027d8960(void* object, unsigned flags) {
    teardown::destroy<fn_027d92c8, 0, 0>(object, flags);
}
