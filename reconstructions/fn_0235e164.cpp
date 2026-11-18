#include "botw/teardown.h"

extern "C" void fn_02caf05c(void* object, unsigned flags);

extern "C" void fn_0235e164(void* object, unsigned flags) {
    teardown::destroy<fn_02caf05c, 0, 0>(object, flags);
}
