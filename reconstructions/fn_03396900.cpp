#include "botw/flagged_accessor.h"

extern "C" bool fn_033967f4(FlaggedAccessor* accessor);

extern "C" bool fn_03396900(void* proc) {
    FlaggedAccessor accessor(proc);
    return fn_033967f4(&accessor);
}
