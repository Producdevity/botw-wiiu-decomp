#include "botw/teardown.h"

extern "C" void fn_023d45f8(void* object, unsigned flags);

extern "C" void fn_023d2670(void* object, unsigned flags) {
    teardown::destroy<fn_023d45f8, 0, 0>(object, flags);
}
