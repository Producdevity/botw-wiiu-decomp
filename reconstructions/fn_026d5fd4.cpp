extern "C" int fn_026d5e78(void*);
extern "C" int fn_026d5eb4(void*);
extern "C" int fn_02957ee8(void*, void*, float);

extern "C" unsigned char fn_026d5fd4(void* object)
{
    if (fn_026d5e78(object) != 0) {
        int result = 1;
        void* owner = *(void**)object;
        float* limitPtr = *(float**)((char*)object + 0x50);
        float limit = *limitPtr;
        if (fn_02957ee8(owner, 0, limit) == 0 || fn_026d5eb4(object) == 0) {
            result = 0;
        }
        return result;
    }
    return 0;
}
