#include "botw/teardown.h"

extern "C" void fn_028154e0(void* object, unsigned flags);

extern "C" void fn_02817718(void* object, unsigned flags) {
    teardown::destroy<fn_028154e0, 0, 0>(object, flags);
}
