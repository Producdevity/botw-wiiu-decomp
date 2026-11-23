typedef int s32;

extern "C" void fn_0383e968(void *, int, int, int);
extern "C" int fn_0383f578(void*, int);

extern "C" s32 data_1015ad08;

extern "C" void fn_028e17d8(void **arg0) {
    if (fn_0383f578((char *)arg0 + 0x80, 1) == 0) {
        fn_0383e968(*arg0, (s32) &data_1015ad08, 1, (s32) ((char *)arg0 + 0x80));
    }
}
