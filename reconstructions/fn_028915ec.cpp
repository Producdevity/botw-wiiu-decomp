extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" unsigned char data_1014faa8[];

extern "C" void* fn_028915ec(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_037b7cf0(storage, a);
    *(const void**)((char*)storage + 12) = data_1014faa8;
    *(unsigned char*)((char*)storage + 32) = 0;
    *(unsigned char*)((char*)storage + 33) = 0;
    return storage;
}
