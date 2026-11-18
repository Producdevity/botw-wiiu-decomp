#include "botw/teardown.h"

extern "C" void fn_021cca40(void* object, unsigned flags);

extern "C" void fn_0233f810(void* object, unsigned flags) {
    teardown::destroy<fn_021cca40, 0, 0>(object, flags);
}
