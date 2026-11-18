#include "botw/teardown.h"

extern "C" void fn_02504de4(void* object, unsigned flags);

extern "C" void fn_0280c9dc(void* object, unsigned flags) {
    teardown::destroy<fn_02504de4, 0, 0>(object, flags);
}
