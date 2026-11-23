extern "C" void* fn_037966a8(void* object);
extern "C" void fn_02b616bc(void* destination, void* source);
extern "C" void fn_02306cb8(void* object);

extern "C" void fn_023052bc(void* p) {
    void* value = fn_037966a8(*(void**)p);
    fn_02b616bc((char*)p + 124, value);
    fn_02306cb8(p);
}
