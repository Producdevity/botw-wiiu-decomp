#include "botw/teardown.h"

extern "C" void fn_02367b30(void* object, unsigned flags);

extern "C" void fn_0225d8bc(void* object, unsigned flags) {
    teardown::destroy<fn_02367b30, 0, 0>(object, flags);
}
