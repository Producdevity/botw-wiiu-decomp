#include "botw/teardown.h"

extern "C" void fn_023c46f4(void* object, unsigned flags);

extern "C" void fn_023ceb3c(void* object, unsigned flags) {
    teardown::destroy<fn_023c46f4, 0, 0>(object, flags);
}
