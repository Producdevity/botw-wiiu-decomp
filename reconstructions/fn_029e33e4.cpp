extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029c7390(void*, const void*);
extern "C" unsigned char data_10184164[];

extern "C" void* fn_029e33e4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(28);
        if (!storage)
            return storage;
    }
    fn_029c7390(storage, arg);
    *(const void**)((char*)storage + 16) = data_10184164;
    return storage;
}
