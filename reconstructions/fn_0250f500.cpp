typedef int s32;

extern "C" void fn_02b610fc(void*);
extern "C" void fn_02b62e04(void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100d3ff4;

extern "C" void fn_0250f500(void **object) {
    fn_02b610fc(*object);
    fn_02b62e04(*object);
    fn_037b8284(object, &data_100d3ff4, 0);
}
