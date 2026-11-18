#include "botw/teardown.h"

extern "C" void fn_022a1e88(void* object, unsigned flags);

extern "C" void fn_0233fb20(void* object, unsigned flags) {
    teardown::destroy<fn_022a1e88, 0, 0>(object, flags);
}
