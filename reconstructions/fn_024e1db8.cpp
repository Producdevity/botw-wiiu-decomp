#include "botw/teardown.h"

extern "C" void fn_024df7dc(void* object, unsigned flags);

extern "C" void fn_024e1db8(void* object, unsigned flags) {
    teardown::destroy<fn_024df7dc, 0, 0>(object, flags);
}
