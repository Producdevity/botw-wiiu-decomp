#include "botw/teardown.h"

extern "C" void fn_032cfb3c(void* object, unsigned flags);

extern "C" void fn_032cea2c(void* object, unsigned flags) {
    teardown::destroy<fn_032cfb3c, 0, 0>(object, flags);
}
