extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0211ba28(void*, const void*);
extern "C" unsigned char data_100319c8[];

extern "C" void* fn_0215f9a0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(212);
        if (!storage)
            return storage;
    }
    fn_0211ba28(storage, arg);
    *(const void**)((char*)storage + 12) = data_100319c8;
    return storage;
}
