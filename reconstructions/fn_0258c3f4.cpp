#include "botw/teardown.h"

extern "C" void fn_0252dfa4(void* object, unsigned flags);

extern "C" void fn_0258c3f4(void* object, unsigned flags) {
    teardown::destroy<fn_0252dfa4, 0, 0>(object, flags);
}
