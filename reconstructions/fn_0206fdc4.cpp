#include "botw/teardown.h"

extern "C" void fn_020919f4(void* object, unsigned flags);

extern "C" void fn_0206fdc4(void* object, unsigned flags) {
    teardown::destroy<fn_020919f4, 0, 0>(object, flags);
}
