extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" unsigned char data_101537f8[];
extern "C" const float data_10153748;

extern "C" void* fn_028a2d28(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    fn_037b7cf0(storage, arg);
    *(const void**)((char*)storage + 12) = data_101537f8;
    {
        char* m1 = (char*)storage + 32;
        if (!m1)
            m1 = (char*)fn_0308e578(16);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
            *(unsigned*)(m1 + 12) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 48;
        if (!m2)
            m2 = (char*)fn_0308e578(12);
        if (m2) {
            *(float*)(m2) = data_10153748;
            *(unsigned*)(m2 + 4) = 0;
            *(unsigned*)(m2 + 8) = 0;
        }
    }
    return storage;
}
