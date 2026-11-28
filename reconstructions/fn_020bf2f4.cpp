typedef int s32;
typedef float f32;

extern "C" void fn_02357394(int);
extern "C" void fn_0294e104(void*, int, int, float);

extern "C" f32 data_1001678c;

extern "C" void fn_020bf2f4(void **handle) {
    fn_0294e104(*handle, 1, 0, data_1001678c);
    fn_02357394((s32) handle);
}
