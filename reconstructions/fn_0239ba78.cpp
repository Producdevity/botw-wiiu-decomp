#include "botw/teardown.h"

extern "C" void fn_0239b494(void* object, unsigned flags);

extern "C" void fn_0239ba78(void* object, unsigned flags) {
    teardown::destroy<fn_0239b494, 0, 0>(object, flags);
}
