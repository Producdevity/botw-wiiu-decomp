#include "botw/teardown.h"

extern "C" void fn_02407158(void* object, unsigned flags);

extern "C" void fn_02406344(void* object, unsigned flags) {
    teardown::destroy<fn_02407158, 0, 0>(object, flags);
}
