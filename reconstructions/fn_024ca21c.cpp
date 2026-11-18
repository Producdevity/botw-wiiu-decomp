#include "botw/teardown.h"

extern "C" void fn_037b7d90(void* object, unsigned flags);

extern "C" void fn_024ca21c(void* object, unsigned flags) {
    teardown::destroy<fn_037b7d90, 0, 0>(object, flags);
}
