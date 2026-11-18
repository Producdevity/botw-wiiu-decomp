#include "botw/teardown.h"

extern "C" void fn_02407a34(void* object, unsigned flags);

extern "C" void fn_02405574(void* object, unsigned flags) {
    teardown::destroy<fn_02407a34, 0, 0>(object, flags);
}
