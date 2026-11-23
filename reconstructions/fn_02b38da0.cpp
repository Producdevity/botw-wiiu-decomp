extern "C" void fn_02b38bb0(void*, void*, void*);
struct ProcAccessor;
extern "C" void* fn_030e0414(const ProcAccessor *);

extern "C" void fn_02b38da0(void *arg0, struct ProcAccessor *arg1, void *arg2) {
    fn_02b38bb0(arg0, fn_030e0414(arg1), arg2);
}
