#include "botw/teardown.h"

extern "C" void fn_0267e344(void* object, unsigned flags);

extern "C" void fn_0267c608(void* object, unsigned flags) {
    teardown::destroy<fn_0267e344, 0, 0>(object, flags);
}
