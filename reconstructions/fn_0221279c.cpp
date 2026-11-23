extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0221202c(void*, const void*);
extern "C" unsigned char data_10055ab0[];

extern "C" void* fn_0221279c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_0221202c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10055ab0;
    return storage;
}
