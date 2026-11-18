#include "botw/teardown.h"

extern "C" void fn_025ba678(void* object, unsigned flags);

extern "C" void fn_028836fc(void* object, unsigned flags) {
    teardown::destroy<fn_025ba678, 0, 0>(object, flags);
}
