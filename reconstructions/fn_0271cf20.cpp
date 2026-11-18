#include "botw/teardown.h"

extern "C" void fn_0271b528(void* object, unsigned flags);

extern "C" void fn_0271cf20(void* object, unsigned flags) {
    teardown::destroy<fn_0271b528, 0, 0>(object, flags);
}
