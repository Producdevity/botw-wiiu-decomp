#include "botw/teardown.h"

extern "C" void fn_02340208(void* object, unsigned flags);

extern "C" void fn_02340734(void* object, unsigned flags) {
    teardown::destroy<fn_02340208, 0, 0>(object, flags);
}
