extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020f5094(void*, const void*);
extern "C" unsigned char data_1001f22c[];

extern "C" void* fn_020f4ae0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(112);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_020f5094(storage, a);
    *(const void**)((char*)storage + 12) = data_1001f22c;
    *(unsigned*)((char*)storage + 108) = 0;
    return storage;
}
