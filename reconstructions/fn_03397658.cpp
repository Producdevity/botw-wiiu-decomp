#include "botw/flagged_accessor.h"

extern "C" bool fn_0339761c(FlaggedAccessor* accessor);

extern "C" bool fn_03397658(void* proc) {
    FlaggedAccessor accessor(proc);
    return fn_0339761c(&accessor);
}
