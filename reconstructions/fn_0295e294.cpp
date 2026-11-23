extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" unsigned char data_1016e244[];
extern "C" const float data_1016e1b0;

extern "C" void* fn_0295e294(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    fn_037b7cf0(storage, arg);
    *(const void**)((char*)storage + 12) = data_1016e244;
    {
        char* m1 = (char*)storage + 32;
        if (!m1)
            m1 = (char*)fn_0308e578(12);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 44;
        if (!m2)
            m2 = (char*)fn_0308e578(12);
        if (m2) {
            *(float*)(m2) = data_1016e1b0;
            *(float*)(m2 + 4) = data_1016e1b0;
            *(float*)(m2 + 8) = data_1016e1b0;
        }
    }
    *(unsigned char*)((char*)storage + 56) = 0;
    return storage;
}
