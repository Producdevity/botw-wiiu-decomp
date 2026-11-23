extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02682d48(void*, const void*);
extern "C" unsigned char data_10109188[];

extern "C" void* fn_02686888(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(440);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02682d48(storage, a);
    *(const void**)((char*)storage + 12) = data_10109188;
    *(unsigned*)((char*)storage + 432) = 0;
    *(unsigned char*)((char*)storage + 436) = 1;
    return storage;
}
