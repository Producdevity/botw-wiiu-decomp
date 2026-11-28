extern "C" void fn_02345624(void*, void*);
extern "C" void fn_037946f0(void*, int, int, int, int, float);

extern "C" float data_10016cf0;
extern "C" int data_10016cf4;

extern "C" void fn_020c105c(void* object, void* context) {
    float value = data_10016cf0;
    fn_037946f0(object, (int)&data_10016cf4, 0, 0, 0, value);
    fn_02345624(object, context);
}
