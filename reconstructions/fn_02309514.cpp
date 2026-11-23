extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022cc034(void*, const void*);
extern "C" unsigned char data_10080aa4[];

extern "C" void* fn_02309514(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(124);
        if (!storage)
            return storage;
    }
    fn_022cc034(storage, arg);
    *(const void**)((char*)storage + 12) = data_10080aa4;
    return storage;
}
