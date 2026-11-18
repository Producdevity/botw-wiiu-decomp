#include "botw/teardown.h"

extern "C" void fn_026ee320(void* object, unsigned flags);

extern "C" void fn_026d7ab4(void* object, unsigned flags) {
    teardown::destroy<fn_026ee320, 0, 0>(object, flags);
}
