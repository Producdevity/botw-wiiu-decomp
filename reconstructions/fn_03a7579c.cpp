#include "botw/memory.h"

extern "C" void fn_03a7579c(unsigned* object) {
    if (object[2]) {
        fn_03a4d6c8(object + 2);
        object[5] = 0;
        object[6] = 0;
    }
}
