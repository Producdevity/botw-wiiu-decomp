#include "botw/teardown.h"

extern "C" void fn_025691c4(void* object, unsigned flags);

extern "C" void fn_02566f74(void* object, unsigned flags) {
    teardown::destroy<fn_025691c4, 0, 0>(object, flags);
}
