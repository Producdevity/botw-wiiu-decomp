#include "botw/teardown.h"

extern "C" void fn_02212800(void* object, unsigned flags);

extern "C" void fn_022ec994(void* object, unsigned flags) {
    teardown::destroy<fn_02212800, 0, 0>(object, flags);
}
