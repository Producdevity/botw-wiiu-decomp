#include "botw/teardown.h"

extern "C" void fn_026a4a38(void* object, unsigned flags);

extern "C" void fn_02682ef0(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_026a4a38, 0, 0>(object, release_flags);
}
