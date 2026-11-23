extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021ec78c(void*, const void*);
extern "C" unsigned char data_1004d788[];

extern "C" void* fn_021ecdd0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(20);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_021ec78c(storage, a);
    *(const void**)((char*)storage + 12) = data_1004d788;
    *(unsigned*)((char*)storage + 16) = 0;
    return storage;
}
