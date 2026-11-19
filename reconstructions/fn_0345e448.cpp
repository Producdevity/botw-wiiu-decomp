#include "botw/teardown.h"

extern "C" void fn_03459400(void* object, unsigned flags);

extern "C" void fn_0345e448(void* object, unsigned flags) {
    teardown::destroy<fn_03459400, 0, 0>(object, flags);
}
