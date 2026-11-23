extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029cc86c(void*, const void*);
extern "C" unsigned char data_101844d0[];

extern "C" void* fn_029e4774(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    fn_029cc86c(storage, arg);
    *(const void**)((char*)storage + 16) = data_101844d0;
    return storage;
}
