extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023fe8ec(void*, const void*);
extern "C" unsigned char data_1006b084[];

extern "C" void* fn_0227bc08(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(28);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_023fe8ec(storage, a);
    *(const void**)((char*)storage + 12) = data_1006b084;
    *(unsigned*)((char*)storage + 24) = 0;
    return storage;
}
