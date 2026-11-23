extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02344874(void*, const void*);
extern "C" unsigned char data_1006a26c[];

extern "C" void* fn_0227912c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    fn_02344874(storage, arg);
    *(const void**)((char*)storage + 12) = data_1006a26c;
    return storage;
}
