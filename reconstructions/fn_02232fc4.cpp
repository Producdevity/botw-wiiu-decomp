#include "botw/teardown.h"

extern "C" void fn_02139970(void* object, unsigned flags);

extern "C" void fn_02232fc4(void* object, unsigned flags) {
    teardown::destroy<fn_02139970, 0, 0>(object, flags);
}
