#include "botw/teardown.h"

extern "C" void fn_02890bb8(void* object, unsigned flags);

extern "C" void fn_02891214(void* object, unsigned flags) {
    teardown::destroy<fn_02890bb8, 0, 0>(object, flags);
}
