#include "botw/teardown.h"

extern "C" void fn_02b4c610(void* object, unsigned flags);

extern "C" void fn_02b462c8(void* object, unsigned flags) {
    teardown::destroy<fn_02b4c610, 0, 0>(object, flags);
}
