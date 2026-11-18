#include "botw/teardown.h"

extern "C" void fn_026d5b90(void* object, unsigned flags);

extern "C" void fn_02900f5c(void* object, unsigned flags) {
    teardown::destroy<fn_026d5b90, 0, 0>(object, flags);
}
