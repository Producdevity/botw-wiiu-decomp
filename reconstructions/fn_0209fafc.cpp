extern "C" const float data_1001344c;
extern "C" const float data_10012ad8;
extern "C" void fn_03bb5d88(void* target, float value);
extern "C" void fn_03bb60c8(void* target, float first, float second);
extern "C" void fn_0209fafc(unsigned char* object, float value)
{
    if (value != data_10012ad8) {
        fn_03bb5d88(object + 3140, data_10012ad8);
        unsigned char* target = object + 3140;
        fn_03bb60c8(target, data_1001344c, value);
    }
}
