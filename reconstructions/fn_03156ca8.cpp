extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" unsigned char data_102876d0[];

extern "C" void* fn_03156ca8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_037b7cf0(storage, arg);
    *(const void**)((char*)storage + 12) = data_102876d0;
    {
        char* m1 = (char*)storage + 32;
        if (!m1)
            m1 = (char*)fn_0308e578(8);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 40;
        if (!m2)
            m2 = (char*)fn_0308e578(2);
        if (m2) {
            *(unsigned short*)(m2) = 0;
        }
    }
    {
        char* m3 = (char*)storage + 42;
        if (!m3)
            m3 = (char*)fn_0308e578(2);
        if (m3) {
            *(unsigned short*)(m3) = 0;
        }
    }
    return storage;
}
