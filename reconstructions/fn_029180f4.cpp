extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0291f0f4(void*, const void*);
extern "C" unsigned char data_101646a0[];

extern "C" void* fn_029180f4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    fn_0291f0f4(storage, arg);
    *(const void**)((char*)storage + 12) = data_101646a0;
    return storage;
}
