#include "botw/teardown.h"

extern "C" void fn_0241d100(void* object, unsigned flags);

extern "C" void fn_0241da54(void* object, unsigned flags) {
    teardown::destroy<fn_0241d100, 0, 0>(object, flags);
}
