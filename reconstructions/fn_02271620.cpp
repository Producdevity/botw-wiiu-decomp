extern "C" int data_10068e70;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_02420210(void* storage, const void* arg);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02271620(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(104);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_02420210(storage, a);
    *(const void**)((char*)storage + 12) = &data_10068e70;
    *(int*)((char*)storage + 92) = 0;
    void* field = (char*)storage + 92;
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
