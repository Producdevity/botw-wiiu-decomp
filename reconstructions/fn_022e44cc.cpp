#include "botw/teardown.h"

extern "C" void fn_022e48b4(void* object, unsigned flags);

extern "C" void fn_022e44cc(void* object, unsigned flags) {
    teardown::destroy<fn_022e48b4, 0, 0>(object, flags);
}
