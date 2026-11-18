#include "botw/teardown.h"

extern "C" void fn_02898c5c(void* object, unsigned flags);

extern "C" void fn_028991e8(void* object, unsigned flags) {
    teardown::destroy<fn_02898c5c, 0, 0>(object, flags);
}
