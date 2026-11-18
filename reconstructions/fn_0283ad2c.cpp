#include "botw/teardown.h"

extern "C" void fn_027fe828(void* object, unsigned flags);

extern "C" void fn_0283ad2c(void* object, unsigned flags) {
    teardown::destroy<fn_027fe828, 0, 0>(object, flags);
}
