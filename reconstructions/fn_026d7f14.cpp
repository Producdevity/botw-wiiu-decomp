#include "botw/teardown.h"

extern "C" void fn_026d8360(void* object, unsigned flags);

extern "C" void fn_026d7f14(void* object, unsigned flags) {
    teardown::destroy<fn_026d8360, 0, 0>(object, flags);
}
