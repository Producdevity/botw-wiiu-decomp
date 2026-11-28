#include "botw/proc_accessor.h"
#include "botw/teardown.h"

extern "C" void fn_0314c454(ProcAccessor* accessor);

extern "C" void fn_0314c5d0(ProcAccessor* accessor, unsigned flags) {
    if (accessor) {
        fn_0314c454(accessor);
        if (flags & 1)
            fn_0308e6d0(accessor);
    }
}
