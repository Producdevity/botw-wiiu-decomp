#include "botw/teardown.h"

extern "C" void fn_0327a840(void* object, unsigned flags);

extern "C" void fn_0253ddd4(void* object, unsigned flags) {
    teardown::destroy<fn_0327a840, 0, 0>(object, flags);
}
