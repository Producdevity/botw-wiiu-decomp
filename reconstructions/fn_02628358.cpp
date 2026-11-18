#include "botw/teardown.h"

extern "C" void fn_0315a098(void* object, unsigned flags);

extern "C" void fn_02628358(void* object, unsigned flags) {
    teardown::destroy<fn_0315a098, 0, 0>(object, flags);
}
