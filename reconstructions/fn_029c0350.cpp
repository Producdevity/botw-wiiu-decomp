extern "C" int data_1017cbb0;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_029e4774(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_029c0350(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(68);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_029e4774(storage, a);
    *(const void**)((char*)storage + 16) = &data_1017cbb0;
    void* member = (char*)storage + 60;
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
