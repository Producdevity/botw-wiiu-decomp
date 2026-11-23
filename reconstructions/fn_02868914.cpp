typedef int s32;

extern "C" void fn_02868880(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_10149678;

extern "C" void fn_02868914(void **arg0) {
    void *temp_r12;

    fn_02868880(arg0);
    temp_r12 = *arg0;
    (*(s32 *)((char *)(temp_r12) + (0x364))) = (s32) ((*(s32 *)((char *)(temp_r12) + (0x364))) & 0xFFFEFFFF);
    fn_037b8284(arg0, &data_10149678, 0);
}
