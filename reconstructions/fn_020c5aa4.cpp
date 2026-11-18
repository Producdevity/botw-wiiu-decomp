#include "botw/teardown.h"

extern "C" void fn_020c5e98(void* object, unsigned flags);

extern "C" void fn_020c5aa4(void* object, unsigned flags) {
    teardown::destroy<fn_020c5e98, 0, 0>(object, flags);
}
