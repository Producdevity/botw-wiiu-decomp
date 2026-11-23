extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_03268698(void*, const void*);
extern "C" unsigned char data_1003afec[];

extern "C" void* fn_021908b0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(140);
        if (!storage)
            return storage;
    }
    fn_03268698(storage, arg);
    *(const void**)((char*)storage + 12) = data_1003afec;
    return storage;
}
