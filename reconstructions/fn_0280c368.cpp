extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_027fe7bc(void*, const void*);
extern "C" unsigned char data_1013b748[];

extern "C" void* fn_0280c368(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    fn_027fe7bc(storage, arg);
    *(const void**)((char*)storage + 12) = data_1013b748;
    return storage;
}
