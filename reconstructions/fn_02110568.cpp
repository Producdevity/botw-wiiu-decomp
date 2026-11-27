extern "C" void fn_022f89fc(void*, void*);
extern "C" void fn_037946f0(void*, int, int, int, int, float);

extern "C" float data_100241c4;
extern "C" int data_100241c8;

extern "C" void fn_02110568(void* arg0, void* arg1) {
    float value = data_100241c4;
    fn_037946f0(arg0, (int)&data_100241c8, 0, 0, 0, value);
    fn_022f89fc(arg0, arg1);
}
