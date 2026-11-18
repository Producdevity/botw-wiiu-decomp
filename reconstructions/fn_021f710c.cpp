#include "botw/teardown.h"

extern "C" void fn_021f6280(void* object, unsigned flags);

extern "C" void fn_021f710c(void* object, unsigned flags) {
    teardown::destroy<fn_021f6280, 0, 0>(object, flags);
}
