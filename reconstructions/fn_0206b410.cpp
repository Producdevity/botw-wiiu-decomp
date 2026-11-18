#include "botw/teardown.h"

extern "C" void fn_020ea5bc(void* object, unsigned flags);

extern "C" void fn_0206b410(void* object, unsigned flags) {
    teardown::destroy<fn_020ea5bc, 0, 0>(object, flags);
}
