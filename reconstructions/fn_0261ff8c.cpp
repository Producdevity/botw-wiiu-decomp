extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02652f6c(void*, const void*);
extern "C" unsigned char data_100f8e38[];

extern "C" void* fn_0261ff8c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(188);
        if (!storage)
            return storage;
    }
    fn_02652f6c(storage, arg);
    *(const void**)((char*)storage + 12) = data_100f8e38;
    return storage;
}
