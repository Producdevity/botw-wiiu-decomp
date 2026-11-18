#include "botw/teardown.h"

extern "C" void fn_02202aa8(void* object, unsigned flags);

extern "C" void fn_021fe034(void* object, unsigned flags) {
    teardown::destroy<fn_02202aa8, 0, 0>(object, flags);
}
