#include "botw/teardown.h"

extern "C" void fn_0217dfa0(void* object, unsigned flags);

extern "C" void fn_0217b6b0(void* object, unsigned flags) {
    teardown::destroy<fn_0217dfa0, 0, 0>(object, flags);
}
