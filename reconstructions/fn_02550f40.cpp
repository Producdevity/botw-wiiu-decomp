typedef int s32;

extern "C" void fn_02550ce4(void*);
extern "C" void fn_0339bd70(void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100dd2f4;

extern "C" void fn_02550f40(void **object) {
    fn_02550ce4(object);
    fn_0339bd70(*object);
    fn_037b8284(object, &data_100dd2f4, 0);
}
