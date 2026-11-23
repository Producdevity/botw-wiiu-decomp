extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0327ee50(void*, const void*);
extern "C" unsigned char data_1004944c[];
extern "C" unsigned char data_10049554[];

extern "C" void* fn_021dcd18(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(28);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0327ee50(storage, a);
    *(const void**)((char*)storage + 12) = data_1004944c;
    *(const void**)((char*)storage + 24) = data_10049554;
    return storage;
}
