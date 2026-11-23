extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022806ac(void*, const void*);
extern "C" unsigned char data_100173d8[];

extern "C" void* fn_020c35d0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    fn_022806ac(storage, arg);
    *(const void**)((char*)storage + 12) = data_100173d8;
    return storage;
}
