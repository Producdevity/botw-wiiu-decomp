extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023af7a0(void*, const void*);
extern "C" unsigned char data_1001c750[];

extern "C" void* fn_020e0c70(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(116);
        if (!storage)
            return storage;
    }
    fn_023af7a0(storage, arg);
    *(const void**)((char*)storage + 12) = data_1001c750;
    return storage;
}
