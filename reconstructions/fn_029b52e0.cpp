#include "botw/teardown.h"

extern "C" void fn_029b4dd0(void* object, unsigned flags);

extern "C" void fn_029b52e0(void* object, unsigned flags) {
    teardown::destroy<fn_029b4dd0, 0, 0>(object, flags);
}
