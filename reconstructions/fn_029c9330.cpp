extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029c9130(void*, const void*);
extern "C" unsigned char data_1017e41c[];

extern "C" void* fn_029c9330(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_029c9130(storage, a);
    *(const void**)((char*)storage + 16) = data_1017e41c;
    *(unsigned char*)((char*)storage + 32) = 0;
    return storage;
}
