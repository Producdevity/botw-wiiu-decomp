extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_026c9df8(void*, const void*);
extern "C" unsigned char data_1013f4a0[];

extern "C" void* fn_02824070(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    fn_026c9df8(storage, arg);
    *(const void**)((char*)storage + 12) = data_1013f4a0;
    return storage;
}
