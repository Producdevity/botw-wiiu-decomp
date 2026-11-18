#include "botw/teardown.h"

extern "C" void fn_031a7810(void* object, unsigned flags);

extern "C" void fn_02de6728(void* object, unsigned flags) {
    teardown::destroy<fn_031a7810, 0, 0>(object, flags);
}
