#include "botw/teardown.h"

extern "C" void fn_02363080(void* object, unsigned flags);

extern "C" void fn_0208fd8c(void* object, unsigned flags) {
    teardown::destroy<fn_02363080, 0, 0>(object, flags);
}
