extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0204ff44(void* memory, void* payload);
extern "C" unsigned char data_10009968[];

extern "C" void* fn_02050048(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(12);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0204ff44(storage, (void*)a);
    *(const void**)((char*)storage + 4) = data_10009968;
    *(unsigned*)((char*)storage + 8) = 0;
    return storage;
}
