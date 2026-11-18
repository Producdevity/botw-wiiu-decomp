#include "botw/teardown.h"

extern "C" void fn_02884ba0(void* object, unsigned flags);

extern "C" void fn_02887cc0(void* object, unsigned flags) {
    teardown::destroy<fn_02884ba0, 0, 0>(object, flags);
}
