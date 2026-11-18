#include "botw/teardown.h"

extern "C" void fn_0215fa04(void* object, unsigned flags);

extern "C" void fn_02160ba8(void* object, unsigned flags) {
    teardown::destroy<fn_0215fa04, 0, 0>(object, flags);
}
