#include "botw/teardown.h"

extern "C" void fn_022579d0(void* object, unsigned flags);

extern "C" void fn_022586d0(void* object, unsigned flags) {
    teardown::destroy<fn_022579d0, 0, 0>(object, flags);
}
