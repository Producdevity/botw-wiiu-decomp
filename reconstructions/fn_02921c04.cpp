#include "botw/teardown.h"

extern "C" void fn_02787c3c(void* object, unsigned flags);

extern "C" void fn_02921c04(void* object, unsigned flags) {
    teardown::destroy<fn_02787c3c, 0, 0>(object, flags);
}
