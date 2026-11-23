extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02419aa0(void*, const void*);
extern "C" unsigned char data_100af058[];

extern "C" void* fn_0241a620(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02419aa0(storage, a);
    *(const void**)((char*)storage + 12) = data_100af058;
    *(unsigned*)((char*)storage + 36) = 0;
    return storage;
}
