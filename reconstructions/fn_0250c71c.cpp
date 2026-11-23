extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_028a1e9c(void*, const void*);
extern "C" unsigned char data_100d3238[];

extern "C" void* fn_0250c71c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    fn_028a1e9c(storage, arg);
    *(const void**)((char*)storage + 12) = data_100d3238;
    return storage;
}
