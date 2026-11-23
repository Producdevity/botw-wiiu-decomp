typedef int s32;

extern "C" int fn_02da25a8(void*, void*);

extern "C" s32 fn_02c722ec(void **arg0) {
    void *temp_r31;

    temp_r31 = *arg0;
    return ((*(s32 *)((char *)(temp_r31) + (0x19B8))) ^ fn_02da25a8(temp_r31, (*(void **)((char *)(temp_r31) + (0x914))))) == 0;
}
