extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021e6fd0(void*, const void*);
extern "C" unsigned char data_1004c184[];

extern "C" void* fn_021e75e8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(132);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_021e6fd0(storage, a);
    *(const void**)((char*)storage + 12) = data_1004c184;
    *(unsigned*)((char*)storage + 128) = 0;
    return storage;
}
