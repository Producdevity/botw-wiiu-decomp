extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023066e4(void*, const void*);
extern "C" unsigned char data_10064af8[];

extern "C" void* fn_0225e140(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(120);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_023066e4(storage, a);
    *(const void**)((char*)storage + 12) = data_10064af8;
    *(unsigned*)((char*)storage + 116) = 0;
    return storage;
}
