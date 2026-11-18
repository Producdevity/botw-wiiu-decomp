#include "botw/teardown.h"

extern "C" void fn_0211bb00(void* object, unsigned flags);

extern "C" void fn_0215fa04(void* object, unsigned flags) {
    teardown::destroy<fn_0211bb00, 0, 0>(object, flags);
}
