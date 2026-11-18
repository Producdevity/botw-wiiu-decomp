#include "botw/teardown.h"

extern "C" void fn_028a1f14(void* object, unsigned flags);

extern "C" void fn_0250c780(void* object, unsigned flags) {
    teardown::destroy<fn_028a1f14, 0, 0>(object, flags);
}
