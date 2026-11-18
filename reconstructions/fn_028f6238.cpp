#include "botw/teardown.h"

extern "C" void fn_028e7f84(void* object, unsigned flags);

extern "C" void fn_028f6238(void* object, unsigned flags) {
    teardown::destroy<fn_028e7f84, 0, 0>(object, flags);
}
