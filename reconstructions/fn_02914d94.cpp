#include "botw/teardown.h"

extern "C" void fn_02912918(void* object, unsigned flags);

extern "C" void fn_02914d94(void* object, unsigned flags) {
    teardown::destroy<fn_02912918, 0, 0>(object, flags);
}
