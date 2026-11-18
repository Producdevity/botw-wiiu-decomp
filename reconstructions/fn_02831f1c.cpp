#include "botw/teardown.h"

extern "C" void fn_027fe828(void* object, unsigned flags);

extern "C" void fn_02831f1c(void* object, unsigned flags) {
    teardown::destroy<fn_027fe828, 0, 0>(object, flags);
}
