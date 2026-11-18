#include "botw/teardown.h"

extern "C" void fn_0230c078(void* object, unsigned flags);

extern "C" void fn_0230da6c(void* object, unsigned flags) {
    teardown::destroy<fn_0230c078, 0, 0>(object, flags);
}
