typedef int s32;

extern "C" void fn_0282818c(void*);
extern "C" void fn_0378a24c(void*, void*);
extern "C" void fn_0383e968(void *, int, int, int);

extern "C" s32 data_10463308;

extern "C" void fn_02829fb8(void **object) {
    fn_0383e968(*object, data_10463308, 2, 0);
    fn_0378a24c(*object, 0);
    fn_0282818c(object);
}
