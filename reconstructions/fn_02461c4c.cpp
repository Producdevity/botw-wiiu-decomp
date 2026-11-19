#include "botw/teardown.h"

extern "C" void fn_02461168(void* object, unsigned flags);

extern "C" void fn_02461c4c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    teardown::destroy<fn_02461168, 0, 0>(object, release_flags);
}
