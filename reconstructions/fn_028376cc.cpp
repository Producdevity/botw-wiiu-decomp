#include "botw/teardown.h"

extern "C" void fn_02834298(void* object, unsigned flags);

extern "C" void fn_028376cc(void* object, unsigned flags) {
    teardown::destroy<fn_02834298, 0, 0>(object, flags);
}
