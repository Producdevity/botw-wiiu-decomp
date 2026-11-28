extern "C" void fn_02b38984(void*, void*, void*);
struct ProcAccessor;
extern "C" void* fn_030e0414(const ProcAccessor*);

extern "C" void fn_02b38a20(void* object, struct ProcAccessor* accessor, void* extra) {
    fn_02b38984(object, fn_030e0414(accessor), extra);
}
