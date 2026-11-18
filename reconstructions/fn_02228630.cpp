#include "botw/teardown.h"

extern "C" void fn_02228994(void* object, unsigned flags);

extern "C" void fn_02228630(void* object, unsigned flags) {
    teardown::destroy<fn_02228994, 0, 0>(object, flags);
}
