extern "C" const float data_103375c0;
extern "C" char* data_1047c390;
extern "C" void fn_03ba9d2c(int, float);
extern "C" void* fn_03baa330(int);

extern "C" void fn_039039ac(int arg0, int arg1) {
    float var_f0;
    void* temp_r3;

    if (arg1 != 0) {
        temp_r3 = fn_03baa330(arg1);
        if (temp_r3 != 0) {
            var_f0 = data_103375c0;
            if ((void* ) data_1047c390 != 0) {
                var_f0 = (*(float*)((char*)((*(void**)((char*)data_1047c390 + 32))) + 44));
            }
            fn_03ba9d2c(arg1, (*(float*)((char*)temp_r3 + 104)) * var_f0);
        }
    }
}
