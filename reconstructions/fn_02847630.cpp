typedef int s32;

struct FieldOwner;
extern "C" void* fn_0314dae8(const FieldOwner *);
extern "C" int fn_033aafe8(void*, void*);

extern "C" void fn_02847630(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_033aafe8((*(void **)((char *)(arg0) + (0))), 0);
    (*(s32 *)((char *)(arg0) + (0x30))) = temp_r3;
    if (temp_r3 != 0) {
        (*(void **)((char *)(arg0) + (0x34))) = fn_0314dae8((struct FieldOwner *) temp_r3);
    }
}
