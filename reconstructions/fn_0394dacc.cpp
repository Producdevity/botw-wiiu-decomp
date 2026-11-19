#include "botw/teardown.h"

extern "C" void fn_0394d43c(void* object, unsigned flags);

extern "C" void fn_0394dacc(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_0394d43c, 0, 0>(object, release_flags);
}
