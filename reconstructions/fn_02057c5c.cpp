#include "botw/teardown.h"

extern "C" void fn_02055890(void* object, unsigned flags);

extern "C" void fn_02057c5c(void* object, unsigned flags) {
    teardown::destroy<fn_02055890, 0, 0>(object, flags);
}
