#include "botw/teardown.h"

extern "C" void fn_022319d8(void* object, unsigned flags);

extern "C" void fn_0236a204(void* object, unsigned flags) {
    teardown::destroy<fn_022319d8, 0, 0>(object, flags);
}
