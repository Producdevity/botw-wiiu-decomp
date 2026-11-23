extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_03269c7c(void*, const void*);
extern "C" unsigned char data_1005d398[];

extern "C" void* fn_02232b68(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(16);
        if (!storage)
            return storage;
    }
    fn_03269c7c(storage, arg);
    *(const void**)((char*)storage + 12) = data_1005d398;
    return storage;
}
