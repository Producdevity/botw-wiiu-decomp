extern "C" const char data_10555cdc;
extern "C" const float data_102d5b0c;
extern "C" void* fn_0354ed84(void* owner, const void* name);
extern "C" void* fn_03510f04(void* object, void* owner);
extern "C" void fn_03bb60c8(void* target, float first, float second);

extern "C" void fn_0351adcc(void* p) {
    char* self = (char*)p;
    void* object = fn_0354ed84(self + 12, &data_10555cdc);
    *(void**)(self + 356) = object;
    if (object && fn_03510f04(object, self + 12)) {
        float second = *(float*)(*(char**)((char*)p + 308) + 460);
        fn_03bb60c8((char*)p + 320, data_102d5b0c, second);
    }
}
