#include "botw/teardown.h"

extern "C" void fn_027e0a60(void* object, unsigned flags);

extern "C" void fn_0292d5dc(void* object, unsigned flags) {
    teardown::destroy<fn_027e0a60, 0, 0>(object, flags);
}
