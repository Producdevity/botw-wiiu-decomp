#include "botw/teardown.h"

extern "C" void fn_0254a2ac(void* object, unsigned flags);

extern "C" void fn_0254aa00(void* object, unsigned flags) {
    teardown::destroy<fn_0254a2ac, 0, 0>(object, flags);
}
