struct ProcAccessor {
    bool acquired;
    void* proc;
};
typedef char ProcAccessorSize[sizeof(ProcAccessor) == 8 ? 1 : -1];

extern "C" void fn_031f9d20(ProcAccessor* accessor);
extern "C" bool fn_0378bddc(void* proc, ProcAccessor* accessor);

extern "C" bool fn_031f9dc0(ProcAccessor* accessor, void* proc) {
    if (accessor->proc != 0) {
        fn_031f9d20(accessor);
    }
    if (proc == 0) {
        return false;
    }
    return fn_0378bddc(proc, accessor);
}
