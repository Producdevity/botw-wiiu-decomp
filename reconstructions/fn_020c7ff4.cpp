extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_020c5a34(void*, const void*);
extern "C" unsigned char data_10018148[];

extern "C" void* fn_020c7ff4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(64);
        if (!storage)
            return storage;
    }
    fn_020c5a34(storage, arg);
    *(const void**)((char*)storage + 12) = data_10018148;
    return storage;
}
