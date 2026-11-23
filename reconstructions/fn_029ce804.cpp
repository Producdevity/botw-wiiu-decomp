extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029c43c0(void*, const void*);
extern "C" unsigned char data_1017f49c[];

extern "C" void* fn_029ce804(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(176);
        if (!storage)
            return storage;
    }
    fn_029c43c0(storage, arg);
    *(const void**)((char*)storage + 16) = data_1017f49c;
    return storage;
}
