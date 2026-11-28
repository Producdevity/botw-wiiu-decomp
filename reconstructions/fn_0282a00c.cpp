typedef int s32;

extern "C" void fn_0282818c(void*);
extern "C" void fn_0378a24c(void*, void*);
extern "C" void fn_0383e968(void *, int, int, int);

extern "C" s32 data_1046330c;

extern "C" void fn_0282a00c(void **object) {
    fn_0383e968(*object, data_1046330c, 2, 0);
    fn_0378a24c(*object, 0);
    fn_0282818c(object);
}
