#include "botw/teardown.h"

extern "C" void fn_0253ddd4(void* object, unsigned flags);

extern "C" void fn_028e5420(void* object, unsigned flags) {
    teardown::destroy<fn_0253ddd4, 0, 0>(object, flags);
}
