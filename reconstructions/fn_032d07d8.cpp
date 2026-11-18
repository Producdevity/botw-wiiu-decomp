#include "botw/teardown.h"

extern "C" void fn_032d17a0(void* object, unsigned flags);

extern "C" void fn_032d07d8(void* object, unsigned flags) {
    teardown::destroy<fn_032d17a0, 0, 0>(object, flags);
}
