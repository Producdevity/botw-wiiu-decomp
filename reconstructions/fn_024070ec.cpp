extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0240794c(void*, const void*);
extern "C" unsigned char data_100ab958[];

extern "C" void* fn_024070ec(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(228);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0240794c(storage, a);
    *(const void**)((char*)storage + 12) = data_100ab958;
    *(unsigned*)((char*)storage + 224) = 0;
    return storage;
}
