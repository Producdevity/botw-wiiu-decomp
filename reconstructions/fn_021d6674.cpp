#include "botw/teardown.h"

extern "C" void fn_021d54c0(void* object, unsigned flags);

extern "C" void fn_021d6674(void* object, unsigned flags) {
    teardown::destroy<fn_021d54c0, 0, 0>(object, flags);
}
