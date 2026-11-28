typedef int s32;

extern "C" int fn_0308e60c(int, void*, int, void*);
struct SizedRange;
extern "C" void fn_0308ea24(SizedRange *, int, void *);

extern "C" s32 data_1025e780;

extern "C" s32 fn_0308ea48(struct SizedRange *range, s32 count, void *heap, s32 alignment) {
    s32 storage;

    if (count > 0) {
        storage = fn_0308e60c(count * 4, heap, alignment, &data_1025e780);
        if (storage != 0) {
            fn_0308ea24(range, count, (void *)storage);
            return 1;
        }
    }
    return 0;
}
