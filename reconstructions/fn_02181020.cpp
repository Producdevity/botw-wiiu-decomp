#include "botw/teardown.h"

extern "C" void fn_0217fca0(void* object, unsigned flags);

extern "C" void fn_02181020(void* object, unsigned flags) {
    teardown::destroy<fn_0217fca0, 0, 0>(object, flags);
}
