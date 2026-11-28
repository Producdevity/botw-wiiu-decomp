extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02c6430c(void* storage, const void* arg);
extern "C" void* fn_02b04cfc(void*);
extern "C" unsigned char data_101c95d0[];

extern "C" void* fn_02c677d4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(112);
        if (!storage)
            return storage;
    }
    fn_02c6430c(storage, arg);
    *(const void**)((char*)storage + 12) = data_101c95d0;
    fn_02b04cfc((char*)storage + 20);
    return storage;
}
