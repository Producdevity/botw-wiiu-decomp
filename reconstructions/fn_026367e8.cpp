#include "botw/teardown.h"

extern "C" void fn_0263af4c(void* object, unsigned flags);

extern "C" void fn_026367e8(void* object, unsigned flags) {
    teardown::destroy<fn_0263af4c, 0, 0>(object, flags);
}
