#include "botw/teardown.h"

extern "C" void fn_02729a94(void* object, unsigned flags);

extern "C" void fn_02993e90(void* object, unsigned flags) {
    teardown::destroy<fn_02729a94, 0, 0>(object, flags);
}
