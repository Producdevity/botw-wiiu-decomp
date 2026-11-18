#include "botw/teardown.h"

extern "C" void fn_02540e7c(void* object, unsigned flags);

extern "C" void fn_0254058c(void* object, unsigned flags) {
    teardown::destroy<fn_02540e7c, 0, 0>(object, flags);
}
