#include "botw/proc_accessor.h"

extern "C" void* fn_03138418(void* owner, bool flag);

extern "C" bool fn_03138570(void* owner, ProcAccessor* accessor) {
    void* proc = fn_03138418(owner, true);
    return fn_031f9dc0(accessor, proc);
}
