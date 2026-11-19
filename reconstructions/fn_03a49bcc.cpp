#include "botw/teardown.h"

extern "C" void fn_03c4923c(void* object, unsigned flags);

extern "C" void fn_03a49bcc(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_03c4923c, 0, 0>(object, release_flags);
}
