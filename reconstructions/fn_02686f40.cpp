#include "botw/teardown.h"

extern "C" void fn_02682ef0(void* object, unsigned flags);

extern "C" void fn_02686f40(void* object, unsigned flags) {
    teardown::destroy<fn_02682ef0, 0, 0>(object, flags);
}
