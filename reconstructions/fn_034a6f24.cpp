typedef int s32;

extern "C" void fn_034a6e04(void*, void*, int);
extern "C" void fn_037fed84(void *, int, void *, void *, void *);
extern "C" void fn_037fef40(void *, int, int, int, int);
extern "C" char* data_1047c3d8;

extern "C" void fn_034a6f24(void *object, s32 handle) {
    fn_037fed84(data_1047c3d8, handle, 0, 0, 0);
    fn_034a6e04(object, (void *) handle, 0);
    fn_034a6e04(object, (void *) handle, 1);
    fn_037fef40(data_1047c3d8, handle, 0, 0, 0);
}
