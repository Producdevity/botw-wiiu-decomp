#include "botw/teardown.h"

extern "C" void fn_029653d0(void* object, unsigned flags);

extern "C" void fn_02964f78(void* object, unsigned flags) {
    teardown::destroy<fn_029653d0, 0, 0>(object, flags);
}
