#include "botw/teardown.h"

extern "C" void fn_02281e58(void* object, unsigned flags);

extern "C" void fn_02281398(void* object, unsigned flags) {
    teardown::destroy<fn_02281e58, 0, 0>(object, flags);
}
