#include "botw/proc_accessor.h"
#include "botw/teardown.h"

extern "C" void fn_037b92e4(ProcAccessor* accessor);

extern "C" void fn_037b9460(ProcAccessor* accessor, unsigned flags) {
    if (accessor) {
        fn_037b92e4(accessor);
        if (flags & 1)
            fn_0308e6d0(accessor);
    }
}
