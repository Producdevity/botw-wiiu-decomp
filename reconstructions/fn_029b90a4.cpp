#include "botw/teardown.h"

extern "C" void fn_029b99c0(void* object, unsigned flags);

extern "C" void fn_029b90a4(void* object, unsigned flags) {
    teardown::destroy<fn_029b99c0, 0, 0>(object, flags);
}
