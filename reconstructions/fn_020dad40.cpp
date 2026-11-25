extern "C" unsigned fn_0348609c(int);
extern "C" void fn_03489294(void*, int);
extern "C" int fn_0379a17c(void*);

extern "C" void fn_020dad40(void* self)
{
    void* owner = *(void**)self;
    int target = *(int*)((char*)owner + 0xf4);
    if (target != 0 && fn_0348609c(target) != 1) {
        if (fn_0379a17c(owner) != 0) {
            *(unsigned char*)((char*)self + 0x2c) = 1;
            return;
        }
        if (*(unsigned char*)((char*)self + 0x2c) != 0)
            fn_03489294((void*)target, 1);
    }
}
