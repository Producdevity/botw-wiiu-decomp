#include "botw/teardown.h"

extern "C" void fn_0236114c(void* object, unsigned flags);

extern "C" void fn_023629f8(void* object, unsigned flags) {
    teardown::destroy<fn_0236114c, 0, 0>(object, flags);
}
