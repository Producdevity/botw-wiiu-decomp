#include "botw/teardown.h"

extern "C" void fn_032d3604(void* object, unsigned flags);

extern "C" void fn_0229f01c(void* object, unsigned flags) {
    teardown::destroy<fn_032d3604, 0, 0>(object, flags);
}
