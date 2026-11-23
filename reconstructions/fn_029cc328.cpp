extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029ca99c(void*, const void*);
extern "C" unsigned char data_1017ed20[];

extern "C" void* fn_029cc328(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(36);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_029ca99c(storage, a);
    *(const void**)((char*)storage + 16) = data_1017ed20;
    *(unsigned*)((char*)storage + 32) = 0;
    return storage;
}
