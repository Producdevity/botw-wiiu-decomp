#include "botw/teardown.h"

extern "C" void fn_0216e754(void* object, unsigned flags);

extern "C" void fn_021d19bc(void* object, unsigned flags) {
    teardown::destroy<fn_0216e754, 0, 0>(object, flags);
}
