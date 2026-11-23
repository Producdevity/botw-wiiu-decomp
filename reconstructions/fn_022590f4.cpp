extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0225947c(void*, const void*);
extern "C" unsigned char data_10063b14[];

extern "C" void* fn_022590f4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(124);
        if (!storage)
            return storage;
    }
    fn_0225947c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10063b14;
    return storage;
}
