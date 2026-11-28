extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021e6fd0(void* storage, const void* arg);
extern "C" void fn_02b614e0(void *);
extern "C" unsigned char data_1004b770[];

extern "C" void* fn_021e527c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(136);
        if (!storage)
            return storage;
    }
    fn_021e6fd0(storage, arg);
    *(const void**)((char*)storage + 12) = data_1004b770;
    fn_02b614e0((char*)storage + 128);
    return storage;
}
