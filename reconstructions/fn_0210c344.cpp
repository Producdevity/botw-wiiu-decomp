#include "botw/teardown.h"

extern "C" void fn_020f4538(void* object, unsigned flags);

extern "C" void fn_0210c344(void* object, unsigned flags) {
    teardown::destroy<fn_020f4538, 0, 0>(object, flags);
}
