#include "botw/teardown.h"

extern "C" void fn_02357290(void* object, unsigned flags);

extern "C" void fn_020c8390(void* object, unsigned flags) {
    teardown::destroy<fn_02357290, 0, 0>(object, flags);
}
