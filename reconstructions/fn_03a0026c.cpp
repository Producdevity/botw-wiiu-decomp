#include "botw/proc_accessor.h"
#include "botw/teardown.h"

extern "C" void fn_03a001ac(ProcAccessor* accessor);

extern "C" void fn_03a0026c(ProcAccessor* accessor, unsigned flags) {
    if (accessor) {
        fn_03a001ac(accessor);
        if (flags & 1)
            fn_0308e6d0(accessor);
    }
}
