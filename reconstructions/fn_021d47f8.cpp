extern "C" int data_10046f18;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_0245c95c(void*, const void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_021d47f8(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(64);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_0245c95c(storage, a);
    *(const void**)((char*)storage + 12) = &data_10046f18;
    *(int*)((char*)storage + 52) = 0;
    void* field = (char*)storage + 52;
    void* member = (char*)field + 4;
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
