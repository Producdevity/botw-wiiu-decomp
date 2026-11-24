extern "C" const float data_102e0760;
extern "C" const float data_102e0764;
extern "C" void fn_03bb5d88(void* target, float value);
extern "C" void fn_03bb60c8(void* target, float first, float second);
extern "C" void fn_0354eebc(unsigned char* object, float value)
{
    if (value != data_102e0764) {
        fn_03bb5d88(object + 124, data_102e0764);
        unsigned char* target = object + 124;
        fn_03bb60c8(target, data_102e0760, value);
    }
}
