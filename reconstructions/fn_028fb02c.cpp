extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0272d584(void*, const void*);
extern "C" unsigned char data_1015e6e8[];

extern "C" void* fn_028fb02c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(104);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0272d584(storage, a);
    *(const void**)((char*)storage + 12) = data_1015e6e8;
    *(unsigned*)((char*)storage + 96) = 0;
    *(unsigned*)((char*)storage + 100) = 0;
    return storage;
}
