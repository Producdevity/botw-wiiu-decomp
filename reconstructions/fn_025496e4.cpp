#include "botw/teardown.h"

extern "C" void fn_02546094(void* object, unsigned flags);

extern "C" void fn_025496e4(void* object, unsigned flags) {
    teardown::destroy<fn_02546094, 0, 0>(object, flags);
}
