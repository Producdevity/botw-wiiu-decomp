extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02344874(void*, const void*);
extern "C" unsigned char data_100a5b80[];

extern "C" void* fn_023e265c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02344874(storage, a);
    *(const void**)((char*)storage + 12) = data_100a5b80;
    *(unsigned char*)((char*)storage + 36) = 0;
    *(unsigned*)((char*)storage + 40) = 0;
    return storage;
}
