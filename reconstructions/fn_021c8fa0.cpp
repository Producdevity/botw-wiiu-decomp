extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021c6b5c(void*, const void*);
extern "C" unsigned char data_10044c20[];

extern "C" void* fn_021c8fa0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_021c6b5c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10044c20;
    return storage;
}
