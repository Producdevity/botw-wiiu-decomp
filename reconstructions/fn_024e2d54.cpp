#include "botw/teardown.h"

extern "C" void fn_024df7dc(void* object, unsigned flags);

extern "C" void fn_024e2d54(void* object, unsigned flags) {
    teardown::destroy<fn_024df7dc, 0, 0>(object, flags);
}
