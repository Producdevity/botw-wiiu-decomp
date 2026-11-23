extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" unsigned char data_10171f9c[];
extern "C" const float data_10171f18;

extern "C" void* fn_02974174(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    fn_037b7cf0(storage, arg);
    *(const void**)((char*)storage + 12) = data_10171f9c;
    {
        char* m1 = (char*)storage + 32;
        if (!m1)
            m1 = (char*)fn_0308e578(20);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
            *(unsigned*)(m1 + 12) = 0;
            *(unsigned*)(m1 + 16) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 52;
        if (!m2)
            m2 = (char*)fn_0308e578(1);
        if (m2) {
            *(unsigned char*)(m2) = 0;
        }
    }
    *(float*)((char*)storage + 56) = data_10171f18;
    return storage;
}
