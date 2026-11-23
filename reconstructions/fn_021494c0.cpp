typedef int s32;

extern "C" int fn_02ea235c(void*, void*);
extern "C" void fn_032043b4(void*, void*, void*);

extern "C" void *data_104698f8;
extern "C" void *data_1046d5b0;

extern "C" s32 fn_021494c0(void *arg0) {
    fn_032043b4(data_1046d5b0, (void *)(fn_02ea235c(data_104698f8, *(*(void ***)((char *)(arg0) + (0x10)))) + 0x18), (char *)arg0 + 0x14);
    return 1;
}
