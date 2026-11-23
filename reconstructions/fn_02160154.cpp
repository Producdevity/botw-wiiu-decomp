extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0215fd0c(void*, const void*);
extern "C" unsigned char data_10031cf8[];

extern "C" void* fn_02160154(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0215fd0c(storage, a);
    *(const void**)((char*)storage + 12) = data_10031cf8;
    *(unsigned*)((char*)storage + 32) = 0;
    return storage;
}
