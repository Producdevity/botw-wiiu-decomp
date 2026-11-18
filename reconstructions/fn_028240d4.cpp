#include "botw/teardown.h"

extern "C" void fn_026c9e94(void* object, unsigned flags);

extern "C" void fn_028240d4(void* object, unsigned flags) {
    teardown::destroy<fn_026c9e94, 0, 0>(object, flags);
}
