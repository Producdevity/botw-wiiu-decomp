typedef int s32;

extern "C" void fn_030a9dc0(void);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_030de138(void*, void*);

extern "C" s32 *data_1046c8b4;
extern "C" s32 data_10549714;
extern "C" s32 data_10549740;

extern "C" void fn_030a9e4c(void *arg0) {
    fn_030bb668(&data_10549740);
    data_1046c8b4 = &data_10549714;
    fn_030de138(&data_10549714, arg0);
    fn_030a9dc0();
    fn_030bb69c(&data_10549740);
}
