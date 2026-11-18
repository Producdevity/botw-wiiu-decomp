#include "botw/teardown.h"

extern "C" void fn_02549cb8(void* object, unsigned flags);

extern "C" void fn_0297f844(void* object, unsigned flags) {
    teardown::destroy<fn_02549cb8, 0, 0>(object, flags);
}
