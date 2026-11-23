typedef int s32;

extern "C" void fn_02de5c94(void *, void *);

extern "C" void *data_1046418c;

extern "C" void fn_02de5a74(void *arg0) {
    fn_02de5c94(data_1046418c, (*(void **)((char *)(arg0) + (4))));
    (*(s32 *)((char *)(arg0) + (0))) = (s32) ((*(s32 *)((char *)(arg0) + (0))) & 0xFFFFFFFE);
}
