#include "botw/teardown.h"

extern "C" void fn_026d6600(void* object, unsigned flags);

extern "C" void fn_026d5b90(void* object, unsigned flags) {
    teardown::destroy<fn_026d6600, 0, 0>(object, flags);
}
