#include "botw/teardown.h"

extern "C" void fn_0215c38c(void* object, unsigned flags);

extern "C" void fn_02452148(void* object, unsigned flags) {
    teardown::destroy<fn_0215c38c, 0, 0>(object, flags);
}
