extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03bc7afc(void*);
extern "C" unsigned char data_103cdf9c[];

extern "C" void* fn_03bc7d0c(void* self)
{
    if (self != 0 || (self = fn_0308e578(0x20)) != 0) {
        fn_03bc7afc(self);
        *(int*)((char*)self + 0x1c) = 0;
        *(unsigned char**)self = data_103cdf9c;
    }
    return self;
}
