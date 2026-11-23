extern "C" const char data_10555fc0;
extern "C" const float data_102da27c;
extern "C" void* fn_0354ed84(void* owner, const void* name);
extern "C" void* fn_03510f04(void* object, void* owner);
extern "C" void fn_03bb60c8(void* target, float first, float second);

extern "C" void fn_035353b0(void* p) {
    char* self = (char*)p;
    void* object = fn_0354ed84(self + 12, &data_10555fc0);
    *(void**)(self + 352) = object;
    if (object && fn_03510f04(object, self + 12)) {
        float second = *(float*)(*(char**)((char*)p + 308) + 444);
        fn_03bb60c8((char*)p + 316, data_102da27c, second);
    }
}
