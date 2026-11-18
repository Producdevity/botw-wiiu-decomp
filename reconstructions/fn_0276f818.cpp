#include "botw/teardown.h"

extern "C" void fn_026c0abc(void* object, unsigned flags);

extern "C" void fn_0276f818(void* object, unsigned flags) {
    teardown::destroy<fn_026c0abc, 0, 0>(object, flags);
}
