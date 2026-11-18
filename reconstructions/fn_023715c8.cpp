#include "botw/teardown.h"

extern "C" void fn_02370d38(void* object, unsigned flags);

extern "C" void fn_023715c8(void* object, unsigned flags) {
    teardown::destroy<fn_02370d38, 0, 0>(object, flags);
}
