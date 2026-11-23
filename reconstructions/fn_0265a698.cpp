extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02652f6c(void*, const void*);
extern "C" unsigned char data_101021d0[];

extern "C" void* fn_0265a698(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(192);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02652f6c(storage, a);
    *(const void**)((char*)storage + 12) = data_101021d0;
    *(unsigned*)((char*)storage + 188) = 0;
    return storage;
}
