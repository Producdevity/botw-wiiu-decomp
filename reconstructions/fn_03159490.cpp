#include "botw/teardown.h"

extern "C" void fn_0315a098(void* object, unsigned flags);

extern "C" void fn_03159490(void* object, unsigned flags) {
    teardown::destroy<fn_0315a098, 0, 0>(object, flags);
}
