extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02787bb0(void*, const void*);
extern "C" unsigned char data_101664f0[];

extern "C" void* fn_02921ba0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_02787bb0(storage, arg);
    *(const void**)((char*)storage + 12) = data_101664f0;
    return storage;
}
