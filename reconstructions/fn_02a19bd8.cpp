extern "C" void fn_030bb668(void*);
extern "C" void fn_030bb69c(void*);
extern "C" bool fn_0378da88(void*);
extern "C" bool fn_0378dacc(void*, void*);
extern "C" void fn_0378da14(void* handle);

extern "C" void fn_02a19bd8(void* object, void* key) {
    void* lock = (char*)object + 2612;
    fn_030bb668(lock);
    void* slot = (char*)object + 2588;
    void* handle = key;
    if (fn_0378da88(slot) && fn_0378dacc(slot, handle)) {
        fn_0378da14(slot);
    }
    fn_030bb69c(lock);
}
