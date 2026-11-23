extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0230bf9c(void*, const void*);
extern "C" unsigned char data_10081c1c[];

extern "C" void* fn_0230da08(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(112);
        if (!storage)
            return storage;
    }
    fn_0230bf9c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10081c1c;
    return storage;
}
