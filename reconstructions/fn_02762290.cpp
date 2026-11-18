#include "botw/teardown.h"

extern "C" void fn_02761d84(void* object, unsigned flags);

extern "C" void fn_02762290(void* object, unsigned flags) {
    teardown::destroy<fn_02761d84, 0, 0>(object, flags);
}
