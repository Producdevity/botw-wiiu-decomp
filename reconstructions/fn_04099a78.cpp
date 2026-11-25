extern "C" void* fn_03f922f0(unsigned size);
extern "C" int data_103fe8a4;

extern "C" void fn_04099a78(void* self)
{
    if (self != 0 || (self = fn_03f922f0(8)) != 0) {
        *(int**)self = &data_103fe8a4;
        *(int*)((char*)self + 4) = 0xffff0001;
    }
}
