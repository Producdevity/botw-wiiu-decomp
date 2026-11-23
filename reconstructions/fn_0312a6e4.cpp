#include "botw/proc_accessor.h"

struct ProcHolder {
    void* vtable;
    void* proc;
};

extern "C" bool fn_0312a6e4(const ProcHolder* holder, ProcAccessor* accessor) {
    void* proc = holder->proc;
    return fn_031f9dc0(accessor, proc);
}
