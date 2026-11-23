struct HandleSlot;

extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_030ff6a0(void*, const void*);
extern "C" HandleSlot* fn_0378dca0(HandleSlot* storage);
extern "C" unsigned char data_1017df84[];
extern "C" const float data_1017df20;

extern "C" void* fn_029c7a90(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_030ff6a0(storage, a);
    *(const void**)((char*)storage + 16) = data_1017df84;
    {
        char* m1 = (char*)storage + 20;
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
        char* m2 = (char*)storage + 36;
        if (!m2)
            m2 = (char*)fn_0308e578(12);
        if (m2) {
            fn_0378dca0((HandleSlot*)(m2));
        }
    }
    {
        char* m3 = (char*)storage + 48;
        if (!m3)
            m3 = (char*)fn_0308e578(12);
        if (m3) {
            *(float*)(m3) = data_1017df20;
            *(float*)(m3 + 4) = data_1017df20;
            *(float*)(m3 + 8) = data_1017df20;
        }
    }
    return storage;
}
