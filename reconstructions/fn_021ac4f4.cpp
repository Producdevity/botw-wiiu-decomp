#include "botw/teardown.h"

extern "C" void fn_021aba50(void* object, unsigned flags);

extern "C" void fn_021ac4f4(void* object, unsigned flags) {
    teardown::destroy<fn_021aba50, 0, 0>(object, flags);
}
