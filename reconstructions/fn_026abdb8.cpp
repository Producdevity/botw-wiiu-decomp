typedef int s32;

extern "C" void fn_026abcd0(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1010e534;

extern "C" void fn_026abdb8(void *object) {
    fn_026abcd0(object, 0);
    fn_037b8284(object, &data_1010e534, 0);
}
