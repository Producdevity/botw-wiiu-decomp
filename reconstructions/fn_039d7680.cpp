extern "C" void fn_0399c200(void* arg0, void* arg1, void* arg2);
extern "C" int fn_039d3d60(void*, void*, void*);
extern "C" void fn_039d7610(void*, void*);
extern "C" void fn_039d7648(void*, void*);
extern "C" void fn_03a7118c(void*, void*, int);

extern "C" void fn_039d7680(void* self, void* arg1, void* arg2)
{
    int found = fn_039d3d60(self, arg1, arg2);
    if (found == 0 || ((*(unsigned short*)((char*)self + 0x390) >> 3) & 1) || !((*(unsigned*)((char*)arg2 + 0x228) >> 0xE) & 1)) {
        fn_039d7610(self, arg2);
        fn_039d7648(self, arg2);
        return;
    }
    fn_03a7118c(*(void**)((char*)self + 0x38C), arg1, *(unsigned char*)((char*)arg2 + 0));
    fn_0399c200(arg2, arg1, 0);
}
