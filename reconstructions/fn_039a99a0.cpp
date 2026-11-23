typedef int s32;

struct InferredObject;
extern "C" bool fn_039a5f78(const void*);
extern "C" int fn_039a9638(void*, void*, int, int, int);

extern "C" void fn_039a99a0(struct InferredObject *arg0, void *arg1) {
    void* const* vt1;
    void **temp_r3;

    fn_039a9638(arg0, arg1, 5, 7, 0);
    if (fn_039a5f78(arg0) != 0) {
        temp_r3 = (*(void ***)((char *)(arg0) + (0x46D8)));
        ((s32 (*)(void **, struct InferredObject *))(vt1 = *(void* const**)&(*temp_r3))[25])(temp_r3, arg0);
    }
}
