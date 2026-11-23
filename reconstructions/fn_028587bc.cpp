extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02858374(void*, const void*);
extern "C" unsigned char data_101475cc[];

extern "C" void* fn_028587bc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02858374(storage, a);
    *(const void**)((char*)storage + 12) = data_101475cc;
    *(unsigned*)((char*)storage + 36) = 0;
    return storage;
}
