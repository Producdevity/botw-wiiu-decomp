#include "botw/teardown.h"

extern "C" void fn_03a83798(void* object, unsigned flags);

extern "C" void fn_03b4a074(void* object, unsigned flags) {
    teardown::destroy<fn_03a83798, 0, 0>(object, flags);
}
