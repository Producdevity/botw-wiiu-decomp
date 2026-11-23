extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_024d18dc(void*, const void*);
extern "C" unsigned char data_101173d0[];

extern "C" void* fn_026e6af8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(220);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_024d18dc(storage, a);
    *(const void**)((char*)storage + 12) = data_101173d0;
    *(unsigned char*)((char*)storage + 216) = 1;
    return storage;
}
