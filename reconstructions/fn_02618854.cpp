extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025918dc(void*, const void*);
extern "C" unsigned char data_100f7a9c[];

extern "C" void* fn_02618854(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(188);
        if (!storage)
            return storage;
    }
    fn_025918dc(storage, arg);
    *(const void**)((char*)storage + 12) = data_100f7a9c;
    return storage;
}
