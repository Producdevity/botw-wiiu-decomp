#include "botw/teardown.h"

extern "C" void fn_0314d860(void* object, unsigned flags);

extern "C" void fn_0314ebd8(void* object, unsigned flags) {
    teardown::destroy<fn_0314d860, 0, 0>(object, flags);
}
