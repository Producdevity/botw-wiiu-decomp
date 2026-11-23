extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_027f04ec(void*, const void*);
extern "C" unsigned char data_10160cac[];

extern "C" void* fn_02907718(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(608);
        if (!storage)
            return storage;
    }
    fn_027f04ec(storage, arg);
    *(const void**)((char*)storage + 12) = data_10160cac;
    return storage;
}
