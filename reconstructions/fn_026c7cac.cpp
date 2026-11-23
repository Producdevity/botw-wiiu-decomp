extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_028a67e0(void*, const void*);
extern "C" unsigned char data_10112024[];

extern "C" void* fn_026c7cac(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(196);
        if (!storage)
            return storage;
    }
    fn_028a67e0(storage, arg);
    *(const void**)((char*)storage + 12) = data_10112024;
    return storage;
}
