extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023fe510(void*, const void*);
extern "C" unsigned char data_1008aaf8[];

extern "C" void* fn_02344cd0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    fn_023fe510(storage, arg);
    *(const void**)((char*)storage + 12) = data_1008aaf8;
    return storage;
}
