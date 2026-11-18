#include "botw/teardown.h"

extern "C" void fn_0214bb48(void* object, unsigned flags);

extern "C" void fn_022c5ad0(void* object, unsigned flags) {
    teardown::destroy<fn_0214bb48, 0, 0>(object, flags);
}
