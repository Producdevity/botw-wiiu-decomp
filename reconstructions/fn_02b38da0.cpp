extern "C" void fn_02b38bb0(void*, void*, void*);
struct ProcAccessor;
extern "C" void* fn_030e0414(const ProcAccessor*);

extern "C" void fn_02b38da0(void* object, struct ProcAccessor* accessor, void* extra) {
    fn_02b38bb0(object, fn_030e0414(accessor), extra);
}
