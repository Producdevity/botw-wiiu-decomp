extern "C" void* data_1046989c;
extern "C" void fn_02e6faec(void* p, float v);
extern "C" void fn_02e6faf4(void*, int, int);
extern "C" int fn_02e898f0(int);
extern "C" void fn_03043dcc(void*);

extern "C" void fn_03043e0c(void* arg0) {
    int var_r4;
    void* temp_r3;

    if ((void* ) (*(void**)((char*)arg0 + 0x1B68)) != 0) {
        fn_03043dcc(arg0);
        temp_r3 = (*(void**)((char*)arg0 + 0x1B68));
        fn_02e6faec(temp_r3, (*(float*)((char*)temp_r3 + 1440)));
        var_r4 = fn_02e898f0((*(int*)((char*)data_1046989c + 88)));
        if (var_r4 > 20) {
            var_r4 = 20;
        }
        fn_02e6faf4((*(void**)((char*)arg0 + 0x1B68)), var_r4, 0);
    }
}
