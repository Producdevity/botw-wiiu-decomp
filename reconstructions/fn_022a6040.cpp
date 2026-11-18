#include "botw/teardown.h"

extern "C" void fn_022a686c(void* object, unsigned flags);

extern "C" void fn_022a6040(void* object, unsigned flags) {
    teardown::destroy<fn_022a686c, 0, 0>(object, flags);
}
