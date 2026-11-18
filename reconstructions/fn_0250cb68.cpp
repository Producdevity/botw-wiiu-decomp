#include "botw/teardown.h"

extern "C" void fn_0250c780(void* object, unsigned flags);

extern "C" void fn_0250cb68(void* object, unsigned flags) {
    teardown::destroy<fn_0250c780, 0, 0>(object, flags);
}
