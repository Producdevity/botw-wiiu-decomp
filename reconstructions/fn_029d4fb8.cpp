#include "botw/teardown.h"

extern "C" void fn_029d4e90(void* object, unsigned flags);

extern "C" void fn_029d4fb8(void* object, unsigned flags) {
    teardown::destroy<fn_029d4e90, 0, 0>(object, flags);
}
