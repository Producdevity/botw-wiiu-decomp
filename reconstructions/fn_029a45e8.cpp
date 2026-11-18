#include "botw/teardown.h"

extern "C" void fn_025327fc(void* object, unsigned flags);

extern "C" void fn_029a45e8(void* object, unsigned flags) {
    teardown::destroy<fn_025327fc, 0, 0>(object, flags);
}
