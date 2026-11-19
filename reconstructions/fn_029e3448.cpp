#include "botw/teardown.h"

extern "C" void fn_029c7400(void* object, unsigned flags);

extern "C" void fn_029e3448(void* object, unsigned flags) {
    teardown::destroy<fn_029c7400, 0, 0>(object, flags);
}
