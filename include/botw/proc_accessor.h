#ifndef BOTW_PROC_ACCESSOR_H
#define BOTW_PROC_ACCESSOR_H

struct ProcAccessor {
    bool acquired;
    void* proc;
};
typedef char ProcAccessorSize[sizeof(ProcAccessor) == 8 ? 1 : -1];

extern "C" void fn_031f9d20(ProcAccessor* accessor);
extern "C" void fn_031f9d70(ProcAccessor* accessor, unsigned flags);
extern "C" bool fn_031f9dc0(ProcAccessor* accessor, void* proc);

// Link slot whose shared data records its current owner link at +4.
struct ProcLink {
    void* data;
    bool flag;
};
typedef char ProcLinkSize[sizeof(ProcLink) == 8 ? 1 : -1];

extern "C" bool fn_0378c600(void* data, int unused, ProcLink* link);
extern "C" void fn_0378c734(ProcLink* link);

#endif
