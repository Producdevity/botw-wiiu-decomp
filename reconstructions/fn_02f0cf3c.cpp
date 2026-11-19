#include "botw/teardown.h"

extern "C" void fn_02e73dd8(void* object, unsigned flags);

extern "C" void fn_02f0cf3c(void* object, unsigned flags) {
    teardown::destroy<fn_02e73dd8, 0, 0>(object, flags);
}
