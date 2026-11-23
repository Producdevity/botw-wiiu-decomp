extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021c6b5c(void*, const void*);
extern "C" unsigned char data_100448e8[];

extern "C" void* fn_021c8060(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_021c6b5c(storage, a);
    *(const void**)((char*)storage + 12) = data_100448e8;
    *(unsigned char*)((char*)storage + 32) = 0;
    return storage;
}
