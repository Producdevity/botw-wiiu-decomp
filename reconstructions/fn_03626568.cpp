#include "botw/teardown.h"

extern "C" void fn_03626148(void* object, unsigned flags);

extern "C" void fn_03626568(void* object, unsigned flags) {
    teardown::destroy<fn_03626148, 0, 0>(object, flags);
}
