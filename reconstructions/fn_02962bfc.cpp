extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0295f56c(void*, const void*);
extern "C" unsigned char data_1016ea50[];

extern "C" void* fn_02962bfc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(64);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0295f56c(storage, a);
    *(const void**)((char*)storage + 12) = data_1016ea50;
    *(unsigned*)((char*)storage + 60) = 0;
    return storage;
}
