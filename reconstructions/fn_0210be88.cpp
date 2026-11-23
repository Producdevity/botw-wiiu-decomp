extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0210c1c4(void*, const void*);
extern "C" unsigned char data_100230d0[];

extern "C" void* fn_0210be88(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(192);
        if (!storage)
            return storage;
    }
    fn_0210c1c4(storage, arg);
    *(const void**)((char*)storage + 12) = data_100230d0;
    return storage;
}
