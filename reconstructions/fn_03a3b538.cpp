#include "botw/teardown.h"

extern "C" void fn_03c45880(void* object, unsigned flags);

extern "C" void fn_03a3b538(void* object, unsigned flags) {
    teardown::destroy<fn_03c45880, 0, 0>(object, flags);
}
