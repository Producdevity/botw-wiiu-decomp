extern "C" unsigned char data_1001b69c[];
extern "C" const unsigned char data_1001b7cc[];
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void fn_0327ff84(void*, void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_020dc894(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(64);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_0327ff84(storage, (void*)a);
    *(const void**)((char*)storage + 12) = data_1001b69c;
    *(const void**)((char*)storage + 24) = data_1001b7cc;
    *(unsigned*)((char*)storage + 52) = 0;
    void* member = (char*)storage + 56;
    if (!member)
        member = fn_0308e578(8);
    if (member) {
        int offset = 0;
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + offset) = data_10263a00;
    }
    return storage;
}
