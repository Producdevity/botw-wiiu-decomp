extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_032676b0(void*, const void*);
extern "C" unsigned char data_1003b474[];

extern "C" void* fn_0219527c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_032676b0(storage, arg);
    *(const void**)((char*)storage + 12) = data_1003b474;
    return storage;
}
