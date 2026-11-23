extern "C" int data_10281a44;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_03114278(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_031144b0(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_03114278(storage, a);
    *(const void**)((char*)storage + 12) = &data_10281a44;
    void* member = (char*)storage + 16;
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
