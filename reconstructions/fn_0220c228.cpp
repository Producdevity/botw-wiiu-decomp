#include "botw/teardown.h"

extern "C" void fn_0220926c(void* object, unsigned flags);

extern "C" void fn_0220c228(void* object, unsigned flags) {
    teardown::destroy<fn_0220926c, 0, 0>(object, flags);
}
