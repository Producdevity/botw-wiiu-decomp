#ifndef BOTW_FLAGGED_ACCESSOR_H
#define BOTW_FLAGGED_ACCESSOR_H

#include "botw/proc_accessor.h"

struct FlaggedAccessor {
    ProcAccessor accessor;
    bool flag;

    explicit FlaggedAccessor(void* proc) {
        accessor.acquired = false;
        accessor.proc = 0;
        fn_031f9dc0(&accessor, proc);
        flag = false;
    }
    ~FlaggedAccessor() { fn_031f9d70(&accessor, 2); }
};
typedef char FlaggedAccessorSize[sizeof(FlaggedAccessor) == 12 ? 1 : -1];

extern "C" bool fn_03393850(FlaggedAccessor* accessor);

#endif
