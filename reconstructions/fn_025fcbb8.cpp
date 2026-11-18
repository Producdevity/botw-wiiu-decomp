#include "botw/teardown.h"

extern "C" void fn_025fd268(void* object, unsigned flags);

extern "C" void fn_025fcbb8(void* object, unsigned flags) {
    teardown::destroy<fn_025fd268, 0, 0>(object, flags);
}
