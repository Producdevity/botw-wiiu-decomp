#include "botw/teardown.h"

extern "C" void fn_02163b24(void* object, unsigned flags);

extern "C" void fn_021a3724(void* object, unsigned flags) {
    teardown::destroy<fn_02163b24, 0, 0>(object, flags);
}
