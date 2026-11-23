extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022988bc(void*, const void*);
extern "C" unsigned char data_1006ea60[];

extern "C" void* fn_0229a1e8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    fn_022988bc(storage, arg);
    *(const void**)((char*)storage + 12) = data_1006ea60;
    return storage;
}
