typedef void (*Method)(void*);

extern "C" void fn_037946f0(void* object, int value, int a, int b, int c, float scale);
extern "C" float data_10086b50;

extern "C" void fn_0232fea4(void* object) {
    (*(Method*)((char*)*(void**)((char*)object + 0x48) + 0x1C))((char*)object + 0x44);
    fn_037946f0(object, *(int*)((char*)object + 0x44), 1, 0, 0, data_10086b50);
}
