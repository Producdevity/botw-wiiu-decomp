#include "botw/teardown.h"

extern "C" void fn_02438fcc(void* object, unsigned flags);

extern "C" void fn_020f4078(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02438fcc, 0, 0>(object, release_flags);
}
