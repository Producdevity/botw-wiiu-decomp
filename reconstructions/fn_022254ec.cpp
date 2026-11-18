#include "botw/teardown.h"

extern "C" void fn_02225930(void* object, unsigned flags);

extern "C" void fn_022254ec(void* object, unsigned flags) {
    teardown::destroy<fn_02225930, 0, 0>(object, flags);
}
