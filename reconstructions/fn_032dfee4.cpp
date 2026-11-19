#include "botw/teardown.h"

extern "C" void fn_0332cd24(void* object, unsigned flags);

extern "C" void fn_032dfee4(void* object, unsigned flags) {
    teardown::destroy<fn_0332cd24, 0, 0>(object, flags);
}
