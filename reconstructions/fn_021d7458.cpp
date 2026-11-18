#include "botw/teardown.h"

extern "C" void fn_021d6ba8(void* object, unsigned flags);

extern "C" void fn_021d7458(void* object, unsigned flags) {
    teardown::destroy<fn_021d6ba8, 0, 0>(object, flags);
}
