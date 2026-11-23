extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029c0350(void*, const void*);
extern "C" unsigned char data_1017ccf4[];

extern "C" void* fn_029c0c10(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(68);
        if (!storage)
            return storage;
    }
    fn_029c0350(storage, arg);
    *(const void**)((char*)storage + 16) = data_1017ccf4;
    return storage;
}
