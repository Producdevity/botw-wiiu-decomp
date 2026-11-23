extern "C" int data_100880bc;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_02334b30(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02337aa4(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(72);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_02334b30(storage, a);
    *(const void**)((char*)storage + 12) = &data_100880bc;
    void* member = (char*)storage + 64;
    if (!member) {
        member = fn_0308e578(8);
        if (!member)
            return storage;
    }
    {
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + 0) = data_10263a00;
    }
    return storage;
}
