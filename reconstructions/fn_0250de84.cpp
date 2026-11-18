#include "botw/teardown.h"

extern "C" void fn_026188b8(void* object, unsigned flags);

extern "C" void fn_0250de84(void* object, unsigned flags) {
    teardown::destroy<fn_026188b8, 0, 0>(object, flags);
}
