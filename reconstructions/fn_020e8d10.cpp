extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020e26fc(void*, const void*);
extern "C" unsigned char data_1001d080[];

extern "C" void* fn_020e8d10(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(248);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_020e26fc(storage, a);
    *(const void**)((char*)storage + 12) = data_1001d080;
    *(unsigned*)((char*)storage + 244) = 0;
    return storage;
}
