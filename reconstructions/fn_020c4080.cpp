extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02283a0c(void*, const void*);
extern "C" unsigned char data_100176f0[];

extern "C" void* fn_020c4080(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    fn_02283a0c(storage, arg);
    *(const void**)((char*)storage + 12) = data_100176f0;
    return storage;
}
