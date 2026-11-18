#include "botw/teardown.h"

extern "C" void fn_03625d30(void* object, unsigned flags);

extern "C" void fn_03626148(void* object, unsigned flags) {
    teardown::destroy<fn_03625d30, 0, 0>(object, flags);
}
