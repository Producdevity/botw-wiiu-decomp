#include "botw/teardown.h"

extern "C" void fn_022a0d8c(void* object, unsigned flags);

extern "C" void fn_0246c188(void* object, unsigned flags) {
    teardown::destroy<fn_022a0d8c, 0, 0>(object, flags);
}
