#include "botw/teardown.h"

extern "C" void fn_02600a98(void* object, unsigned flags);

extern "C" void fn_025ffb68(void* object, unsigned flags) {
    teardown::destroy<fn_02600a98, 0, 0>(object, flags);
}
