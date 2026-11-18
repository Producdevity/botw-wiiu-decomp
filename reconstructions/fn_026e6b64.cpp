#include "botw/teardown.h"

extern "C" void fn_024d1a78(void* object, unsigned flags);

extern "C" void fn_026e6b64(void* object, unsigned flags) {
    teardown::destroy<fn_024d1a78, 0, 0>(object, flags);
}
