#include "botw/teardown.h"

extern "C" void fn_024de950(void* object, unsigned flags);

extern "C" void fn_026ddc88(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_024de950, 0, 0>(object, release_flags);
}
