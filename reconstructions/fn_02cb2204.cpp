typedef void (*Method)(void*);

extern "C" void fn_02d6b514(void* owner);
extern "C" int fn_02d8e888(void* owner);
extern "C" void fn_02ddfcbc(void* owner);
extern "C" void fn_037945e8(void* object, float* value, float scale);
extern "C" float data_101d4744;

extern "C" void fn_02cb2204(void* object) {
    float value;
    void* owner;

    if (fn_02d8e888(*(void**)object) == 0) {
        fn_02ddfcbc(*(void**)object);
    }
    owner = *(void**)object;
    value = data_101d4744;
    fn_037945e8((char*)owner + 0x1AE4, &value, *(float*)((char*)owner + 0x12B8));
    (*(Method*)((char*)*(void**)((char*)object + 0xC) + 0x104))(object);
    fn_02d6b514(*(void**)object);
}
