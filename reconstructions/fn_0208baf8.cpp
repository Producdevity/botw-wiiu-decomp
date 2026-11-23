extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0211ba28(void*, const void*);
extern "C" unsigned char data_10010fc0[];

extern "C" void* fn_0208baf8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(216);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0211ba28(storage, a);
    *(const void**)((char*)storage + 12) = data_10010fc0;
    *(unsigned char*)((char*)storage + 212) = 0;
    return storage;
}
