extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02201184(void*, const void*);
extern "C" unsigned char data_1004dbc4[];

extern "C" void* fn_021eda8c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(104);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02201184(storage, a);
    *(const void**)((char*)storage + 12) = data_1004dbc4;
    *(unsigned*)((char*)storage + 100) = 0;
    return storage;
}
