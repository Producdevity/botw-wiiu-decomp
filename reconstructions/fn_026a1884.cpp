typedef int s32;

extern "C" char* fn_0204151c(void *);
extern "C" int fn_02674b2c(void*);
extern "C" void fn_02674e00(void *, int);
extern "C" void fn_02674e3c(void *, void *);
extern "C" void fn_03487a04(void*, void*);
extern "C" void fn_03487ae4(void*, void*);
extern "C" void fn_0348da08(void*, int, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1010c9d4;

extern "C" void fn_026a1884(void *arg0) {
    s32 temp_r3;
    void *temp_r31;

    temp_r3 = fn_02674b2c(arg0);
    if ((temp_r3 != 0) && ((s32) (*(s32 *)((char *)(fn_0204151c((void *) temp_r3)) + (0x3C))) == 1)) {
        temp_r31 = (*(void **)((char *)(temp_r3) + (0xF4)));
        if (temp_r31 != 0) {
            fn_0348da08(temp_r31, 1, (void *)1);
            fn_03487a04(temp_r31, 0);
            fn_03487ae4(temp_r31, 0);
        }
    }
    fn_02674e00(arg0, 0xC);
    fn_02674e3c(arg0, 0);
    fn_037b8284(arg0, &data_1010c9d4, 0);
}
