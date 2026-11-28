#include "botw/flagged_accessor.h"

extern "C" bool fn_03393a68(FlaggedAccessor* accessor);

extern "C" bool fn_0339695c(void* proc) {
    FlaggedAccessor accessor(proc);
    return fn_03393a68(&accessor);
}
