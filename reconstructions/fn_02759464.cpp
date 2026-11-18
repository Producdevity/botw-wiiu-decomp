#include "botw/teardown.h"

extern "C" void fn_0275a378(void* object, unsigned flags);

extern "C" void fn_02759464(void* object, unsigned flags) {
    teardown::destroy<fn_0275a378, 0, 0>(object, flags);
}
