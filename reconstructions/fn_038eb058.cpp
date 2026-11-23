extern "C" const char data_10594a74;
extern "C" const float data_10334e60;
extern "C" void* fn_0354ed84(void* owner, const void* name);
extern "C" void* fn_03510f04(void* object, void* owner);
extern "C" void fn_03bb60c8(void* target, float first, float second);

extern "C" void fn_038eb058(void* p) {
    char* self = (char*)p;
    void* object = fn_0354ed84(self + 12, &data_10594a74);
    *(void**)(self + 356) = object;
    if (object && fn_03510f04(object, self + 12)) {
        float second = *(float*)(*(char**)((char*)p + 308) + 460);
        fn_03bb60c8((char*)p + 320, data_10334e60, second);
    }
}
