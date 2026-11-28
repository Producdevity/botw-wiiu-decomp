#include "botw/flagged_accessor.h"

extern "C" bool fn_03394058(FlaggedAccessor* accessor);

extern "C" bool fn_03397c80(void* proc) {
    FlaggedAccessor accessor(proc);
    return fn_03394058(&accessor);
}
