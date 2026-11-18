#include "botw/teardown.h"

extern "C" void fn_024211a0(void* object, unsigned flags);

extern "C" void fn_022cc174(void* object, unsigned flags) {
    teardown::destroy<fn_024211a0, 0, 0>(object, flags);
}
