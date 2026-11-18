#include "botw/teardown.h"

extern "C" void fn_02106f70(void* object, unsigned flags);

extern "C" void fn_02104dd4(void* object, unsigned flags) {
    teardown::destroy<fn_02106f70, 0, 0>(object, flags);
}
