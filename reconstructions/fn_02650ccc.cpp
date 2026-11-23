extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_026512cc(void*, const void*);
extern "C" unsigned char data_10100350[];

extern "C" void* fn_02650ccc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_026512cc(storage, a);
    *(const void**)((char*)storage + 12) = data_10100350;
    *(unsigned*)((char*)storage + 36) = 0;
    return storage;
}
