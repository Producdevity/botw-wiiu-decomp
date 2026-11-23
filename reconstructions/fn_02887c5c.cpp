extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02884b3c(void*, const void*);
extern "C" unsigned char data_1014dc44[];

extern "C" void* fn_02887c5c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(700);
        if (!storage)
            return storage;
    }
    fn_02884b3c(storage, arg);
    *(const void**)((char*)storage + 12) = data_1014dc44;
    return storage;
}
