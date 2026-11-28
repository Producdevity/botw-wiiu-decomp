#include "botw/proc_accessor.h"
#include "botw/teardown.h"

extern "C" void fn_030ffe88(ProcAccessor* accessor);

extern "C" void fn_03100004(ProcAccessor* accessor, unsigned flags) {
    if (accessor) {
        fn_030ffe88(accessor);
        if (flags & 1)
            fn_0308e6d0(accessor);
    }
}
