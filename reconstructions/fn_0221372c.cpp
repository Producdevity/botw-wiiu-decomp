extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022132bc(void*, const void*);
extern "C" unsigned char data_10056080[];

extern "C" void* fn_0221372c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_022132bc(storage, a);
    *(const void**)((char*)storage + 12) = data_10056080;
    *(unsigned*)((char*)storage + 40) = 0;
    return storage;
}
