extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020f2964(void*, const void*);
extern "C" unsigned char data_1002695c[];

extern "C" void* fn_0211c91c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(108);
        if (!storage)
            return storage;
    }
    fn_020f2964(storage, arg);
    *(const void**)((char*)storage + 12) = data_1002695c;
    return storage;
}
