extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025918dc(void*, const void*);
extern "C" unsigned char data_10122358[];

extern "C" void* fn_02743284(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(192);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_025918dc(storage, a);
    *(const void**)((char*)storage + 12) = data_10122358;
    *(unsigned*)((char*)storage + 188) = 0;
    return storage;
}
