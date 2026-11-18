#include "botw/teardown.h"

extern "C" void fn_021e4268(void* object, unsigned flags);

extern "C" void fn_021e4e94(void* object, unsigned flags) {
    teardown::destroy<fn_021e4268, 0, 0>(object, flags);
}
