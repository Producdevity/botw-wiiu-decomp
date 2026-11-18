#include "botw/teardown.h"

extern "C" void fn_022c5eb8(void* object, unsigned flags);

extern "C" void fn_022c7710(void* object, unsigned flags) {
    teardown::destroy<fn_022c5eb8, 0, 0>(object, flags);
}
