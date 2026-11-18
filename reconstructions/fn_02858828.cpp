#include "botw/teardown.h"

extern "C" void fn_028583e0(void* object, unsigned flags);

extern "C" void fn_02858828(void* object, unsigned flags) {
    teardown::destroy<fn_028583e0, 0, 0>(object, flags);
}
