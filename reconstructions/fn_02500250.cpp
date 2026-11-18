#include "botw/teardown.h"

extern "C" void fn_02921018(void* object, unsigned flags);

extern "C" void fn_02500250(void* object, unsigned flags) {
    teardown::destroy<fn_02921018, 0, 0>(object, flags);
}
