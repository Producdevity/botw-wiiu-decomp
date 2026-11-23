extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_027fac3c(void*, const void*);
extern "C" unsigned char data_10138880[];
extern "C" const float data_101387f8;

extern "C" void* fn_027eeb94(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(364);
        if (!storage)
            return storage;
    }
    fn_027fac3c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10138880;
    {
        char* m1 = (char*)storage + 332;
        if (!m1)
            m1 = (char*)fn_0308e578(12);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 344;
        if (!m2)
            m2 = (char*)fn_0308e578(12);
        if (m2) {
            *(float*)(m2) = data_101387f8;
            *(float*)(m2 + 4) = data_101387f8;
            *(float*)(m2 + 8) = data_101387f8;
        }
    }
    *(unsigned char*)((char*)storage + 356) = 0;
    *(unsigned*)((char*)storage + 360) = 0;
    return storage;
}
