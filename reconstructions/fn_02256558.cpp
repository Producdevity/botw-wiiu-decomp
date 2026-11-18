#include "botw/teardown.h"

extern "C" void fn_02254c50(void* object, unsigned flags);

extern "C" void fn_02256558(void* object, unsigned flags) {
    teardown::destroy<fn_02254c50, 0, 0>(object, flags);
}
