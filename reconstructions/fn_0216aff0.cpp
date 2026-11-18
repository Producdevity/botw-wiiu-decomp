#include "botw/teardown.h"

extern "C" void fn_022a7f10(void* object, unsigned flags);

extern "C" void fn_0216aff0(void* object, unsigned flags) {
    teardown::destroy<fn_022a7f10, 0, 0>(object, flags);
}
