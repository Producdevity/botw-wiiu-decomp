#include "botw/teardown.h"

extern "C" void fn_026f7208(void* object, unsigned flags);

extern "C" void fn_0253baa4(void* object, unsigned flags) {
    teardown::destroy<fn_026f7208, 0, 0>(object, flags);
}
