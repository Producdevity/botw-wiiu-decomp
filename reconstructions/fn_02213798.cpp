#include "botw/teardown.h"

extern "C" void fn_02213338(void* object, unsigned flags);

extern "C" void fn_02213798(void* object, unsigned flags) {
    teardown::destroy<fn_02213338, 0, 0>(object, flags);
}
