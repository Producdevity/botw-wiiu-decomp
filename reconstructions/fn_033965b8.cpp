#include "botw/flagged_accessor.h"

extern "C" bool fn_033964ac(FlaggedAccessor* accessor);

extern "C" bool fn_033965b8(void* proc) {
    FlaggedAccessor accessor(proc);
    return fn_033964ac(&accessor);
}
