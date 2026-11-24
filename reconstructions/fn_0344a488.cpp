extern "C" int fn_0344a464(void*);

extern "C" unsigned char fn_0344a488(void* object)
{
    int result = 0;
    if (fn_0344a464(object) == 0) {
        void* owner = *(void**)((char*)object + 0x24);
        int state = *(int*)((char*)owner + 0x44);
        if (state == 1) {
            result = 1;
        }
    }
    return result;
}
