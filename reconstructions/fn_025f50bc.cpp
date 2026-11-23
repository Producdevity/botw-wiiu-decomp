extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025906d0(void*, const void*);
extern "C" unsigned char data_100f286c[];

extern "C" void* fn_025f50bc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_025906d0(storage, arg);
    *(const void**)((char*)storage + 12) = data_100f286c;
    return storage;
}
