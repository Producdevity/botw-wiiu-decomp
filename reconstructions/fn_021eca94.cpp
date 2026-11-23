extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021ec78c(void*, const void*);
extern "C" unsigned char data_1004d620[];

extern "C" void* fn_021eca94(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(16);
        if (!storage)
            return storage;
    }
    fn_021ec78c(storage, arg);
    *(const void**)((char*)storage + 12) = data_1004d620;
    return storage;
}
