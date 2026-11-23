extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025918dc(void*, const void*);
extern "C" unsigned char data_101116e0[];

extern "C" void* fn_026c532c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(188);
        if (!storage)
            return storage;
    }
    fn_025918dc(storage, arg);
    *(const void**)((char*)storage + 12) = data_101116e0;
    return storage;
}
