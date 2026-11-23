extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02532798(void*, const void*);
extern "C" unsigned char data_101777e4[];

extern "C" void* fn_029a457c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02532798(storage, a);
    *(const void**)((char*)storage + 12) = data_101777e4;
    *(unsigned*)((char*)storage + 32) = 0;
    return storage;
}
