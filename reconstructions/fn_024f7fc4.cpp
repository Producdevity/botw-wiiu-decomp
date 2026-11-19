#include "botw/teardown.h"

extern "C" void fn_02598758(void* object, unsigned flags);

extern "C" void fn_024f7fc4(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02598758, 0, 0>(object, release_flags);
}
