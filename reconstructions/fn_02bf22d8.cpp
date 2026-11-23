extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02bf215c(void*, const void*);
extern "C" unsigned char data_101bc5f4[];

extern "C" void* fn_02bf22d8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(68);
        if (!storage)
            return storage;
    }
    fn_02bf215c(storage, arg);
    *(const void**)((char*)storage + 64) = data_101bc5f4;
    return storage;
}
