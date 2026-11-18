#include "botw/teardown.h"

extern "C" void fn_021f5e78(void* object, unsigned flags);

extern "C" void fn_02228994(void* object, unsigned flags) {
    teardown::destroy<fn_021f5e78, 0, 0>(object, flags);
}
