#include "botw/proc_accessor.h"
#include "botw/teardown.h"

extern "C" void fn_0384bb3c(ProcAccessor* accessor);

extern "C" void fn_0384bb94(ProcAccessor* accessor, unsigned flags) {
    if (accessor) {
        fn_0384bb3c(accessor);
        if (flags & 1)
            fn_0308e6d0(accessor);
    }
}
