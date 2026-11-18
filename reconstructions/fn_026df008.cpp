#include "botw/teardown.h"

extern "C" void fn_02564354(void* object, unsigned flags);

extern "C" void fn_026df008(void* object, unsigned flags) {
    teardown::destroy<fn_02564354, 0, 0>(object, flags);
}
