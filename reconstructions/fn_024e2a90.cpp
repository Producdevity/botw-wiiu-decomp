extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_024df708(void*, const void*);
extern "C" unsigned char data_100cbf08[];

extern "C" void* fn_024e2a90(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    fn_024df708(storage, arg);
    *(const void**)((char*)storage + 12) = data_100cbf08;
    return storage;
}
