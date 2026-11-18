#include "botw/teardown.h"

extern "C" void fn_02172674(void* object, unsigned flags);

extern "C" void fn_02076f8c(void* object, unsigned flags) {
    teardown::destroy<fn_02172674, 0, 0>(object, flags);
}
