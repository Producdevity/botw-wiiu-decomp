#include "botw/teardown.h"

extern "C" void fn_029dab68(void* object, unsigned flags);

extern "C" void fn_029db328(void* object, unsigned flags) {
    teardown::destroy<fn_029dab68, 0, 0>(object, flags);
}
