#include "botw/teardown.h"

extern "C" void fn_029df1c0(void* object, unsigned flags);

extern "C" void fn_029c89b4(void* object, unsigned flags) {
    teardown::destroy<fn_029df1c0, 0, 0>(object, flags);
}
