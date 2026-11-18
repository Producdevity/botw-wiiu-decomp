#include "botw/teardown.h"

extern "C" void fn_021e89ac(void* object, unsigned flags);

extern "C" void fn_021e8ef8(void* object, unsigned flags) {
    teardown::destroy<fn_021e89ac, 0, 0>(object, flags);
}
