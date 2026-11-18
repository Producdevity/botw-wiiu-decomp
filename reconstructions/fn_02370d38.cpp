#include "botw/teardown.h"

extern "C" void fn_023719e4(void* object, unsigned flags);

extern "C" void fn_02370d38(void* object, unsigned flags) {
    teardown::destroy<fn_023719e4, 0, 0>(object, flags);
}
