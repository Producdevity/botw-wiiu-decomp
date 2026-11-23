extern "C" char* data_1047c390;
extern "C" void* fn_0355ef40(void* object);
extern "C" void fn_0356fc30(void* object, int flag);
extern "C" void fn_023ed210() {
    void* object = *(void**)(data_1047c390 + 28);
    if (object) {
        void* result = fn_0355ef40(object);
        if (result)
            fn_0356fc30(result, 1);
    }
}
