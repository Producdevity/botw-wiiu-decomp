#include "botw/teardown.h"

extern "C" void fn_0263e390(void* object, unsigned flags);

extern "C" void fn_028b16d4(void* object, unsigned flags) {
    teardown::destroy<fn_0263e390, 0, 0>(object, flags);
}
