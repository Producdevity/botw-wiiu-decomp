extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0237196c(void*, const void*);
extern "C" unsigned char data_10091ec4[];

extern "C" void* fn_02370ccc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(680);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0237196c(storage, a);
    *(const void**)((char*)storage + 12) = data_10091ec4;
    *(unsigned char*)((char*)storage + 676) = 0;
    return storage;
}
