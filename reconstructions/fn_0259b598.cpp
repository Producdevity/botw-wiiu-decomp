#include "botw/teardown.h"

extern "C" void fn_0277e850(void* object, unsigned flags);

extern "C" void fn_0259b598(void* object, unsigned flags) {
    teardown::destroy<fn_0277e850, 0, 0>(object, flags);
}
