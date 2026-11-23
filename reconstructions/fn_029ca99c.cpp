extern "C" int data_1017ea4c;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_030ff6a0(void*, const void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_029ca99c(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_030ff6a0(storage, a);
    *(const void**)((char*)storage + 16) = &data_1017ea4c;
    *(int*)((char*)storage + 20) = 0;
    void* field = (char*)storage + 20;
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
