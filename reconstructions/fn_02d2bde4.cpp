typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern "C" void fn_02d816bc(void*);
extern "C" void fn_0344a898(void *, void *);
extern "C" void* fn_037966a8(void *);
extern "C" int fn_037b7cac(void *);
extern "C" void fn_037b7e9c(void *, unsigned int, void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_101e1cbc;

extern "C" void fn_02d2bde4(void *arg0) {
    struct { s32 f8; } sp;
    void *temp_r3;

    temp_r3 = fn_037966a8((*(void **)((char *)(arg0) + (0))));
    if (temp_r3 != 0) {
        sp.f8 = 3;
        fn_0344a898(temp_r3, &sp.f8);
    }
    fn_02d816bc((*(void **)((char *)(arg0) + (0))));
    if (fn_037b7cac(arg0) != 0) {
        fn_037b7e9c(arg0, (u32) (*(u16 *)((char *)(arg0) + (0x14))), 0);
        return;
    }
    fn_037b8284(arg0, &data_101e1cbc, 0);
}
