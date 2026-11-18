#include "botw/teardown.h"

extern "C" void fn_023daaf0(void* object, unsigned flags);

extern "C" void fn_023e5894(void* object, unsigned flags) {
    teardown::destroy<fn_023daaf0, 0, 0>(object, flags);
}
