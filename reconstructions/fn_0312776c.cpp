#include "botw/proc_accessor.h"
#include "botw/teardown.h"

extern "C" void fn_031276a4(ProcAccessor* accessor);

extern "C" void fn_0312776c(ProcAccessor* accessor, unsigned flags) {
    if (accessor) {
        fn_031276a4(accessor);
        if (flags & 1)
            fn_0308e6d0(accessor);
    }
}
