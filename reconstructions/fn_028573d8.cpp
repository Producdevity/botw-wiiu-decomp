extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02857718(void*, const void*);
extern "C" unsigned char data_101470b8[];

extern "C" void* fn_028573d8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(104);
        if (!storage)
            return storage;
    }
    fn_02857718(storage, arg);
    *(const void**)((char*)storage + 12) = data_101470b8;
    return storage;
}
