extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_03276cf0(void*, const void*);
extern "C" unsigned char data_10132a60[];

extern "C" void* fn_027cc188(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    fn_03276cf0(storage, arg);
    *(const void**)((char*)storage + 12) = data_10132a60;
    return storage;
}
