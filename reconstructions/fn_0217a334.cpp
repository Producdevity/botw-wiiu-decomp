#include "botw/teardown.h"

extern "C" void fn_02175efc(void* object, unsigned flags);

extern "C" void fn_0217a334(void* object, unsigned flags) {
    teardown::destroy<fn_02175efc, 0, 0>(object, flags);
}
