#include "botw/flagged_accessor.h"

extern "C" bool fn_03398774(FlaggedAccessor* accessor);

extern "C" bool fn_03398824(void* proc) {
    FlaggedAccessor accessor(proc);
    return fn_03398774(&accessor);
}
