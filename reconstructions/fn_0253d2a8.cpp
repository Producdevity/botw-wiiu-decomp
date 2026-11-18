#include "botw/teardown.h"

extern "C" void fn_026521d0(void* object, unsigned flags);

extern "C" void fn_0253d2a8(void* object, unsigned flags) {
    teardown::destroy<fn_026521d0, 0, 0>(object, flags);
}
