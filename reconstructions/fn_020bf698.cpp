#include "botw/teardown.h"

extern "C" void fn_0236fffc(void* object, unsigned flags);

extern "C" void fn_020bf698(void* object, unsigned flags) {
    teardown::destroy<fn_0236fffc, 0, 0>(object, flags);
}
