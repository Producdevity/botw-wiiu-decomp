extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02862d5c(void*, const void*);
extern "C" unsigned char data_10147df4[];

extern "C" void* fn_0285c1c8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_02862d5c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10147df4;
    return storage;
}
