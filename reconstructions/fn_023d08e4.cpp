#include "botw/teardown.h"

extern "C" void fn_023cf2a4(void* object, unsigned flags);

extern "C" void fn_023d08e4(void* object, unsigned flags) {
    teardown::destroy<fn_023cf2a4, 0, 0>(object, flags);
}
