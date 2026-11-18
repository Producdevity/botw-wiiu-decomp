#include "botw/teardown.h"

extern "C" void fn_02297c74(void* object, unsigned flags);

extern "C" void fn_02296dd8(void* object, unsigned flags) {
    teardown::destroy<fn_02297c74, 0, 0>(object, flags);
}
