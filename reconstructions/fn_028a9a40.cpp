#include "botw/teardown.h"

extern "C" void fn_028c32d4(void* object, unsigned flags);

extern "C" void fn_028a9a40(void* object, unsigned flags) {
    teardown::destroy<fn_028c32d4, 0, 0>(object, flags);
}
