extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029df130(void*, const void*);
extern "C" unsigned char data_10183ae0[];

extern "C" void* fn_029e0e58(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_029df130(storage, a);
    *(const void**)((char*)storage + 16) = data_10183ae0;
    *(unsigned*)((char*)storage + 36) = 0;
    return storage;
}
