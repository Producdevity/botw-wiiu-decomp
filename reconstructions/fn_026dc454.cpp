#include "botw/teardown.h"

extern "C" void fn_026dc51c(void* object, unsigned flags);

extern "C" void fn_026dc454(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_026dc51c, 0, 0>(object, release_flags);
}
