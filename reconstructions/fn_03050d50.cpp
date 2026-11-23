typedef int s32;

extern "C" void fn_0304e5d8(void*, void*);

extern "C" s32 data_105481d0;

extern "C" void fn_03050d50(void *arg0) {
    fn_0304e5d8(arg0, &data_105481d0);
    (*(s32 *)((char *)(((char *)arg0 + 0x40000)) + (0x810))) = (s32) ((*(s32 *)((char *)(arg0) + (0x40810))) | 4);
}
