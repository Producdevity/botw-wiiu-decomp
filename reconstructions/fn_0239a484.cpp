#include "botw/teardown.h"

extern "C" void fn_0239a158(void* object, unsigned flags);

extern "C" void fn_0239a484(void* object, unsigned flags) {
    teardown::destroy<fn_0239a158, 0, 0>(object, flags);
}
