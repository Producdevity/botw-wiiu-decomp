#include "botw/teardown.h"

extern "C" void fn_022d1bc0(void* object, unsigned flags);

extern "C" void fn_023c3410(void* object, unsigned flags) {
    teardown::destroy<fn_022d1bc0, 0, 0>(object, flags);
}
