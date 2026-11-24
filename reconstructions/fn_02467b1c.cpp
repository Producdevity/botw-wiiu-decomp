extern "C" int fn_02c1b6c0(void*, void*);
extern "C" void fn_030ea2cc(void*);
extern "C" float data_100bd0bc;
inline int checkOwner(void* object)
{
    return fn_02c1b6c0(object, 0);
}
extern "C" void fn_02467b1c(void* self)
{
    void* owner = *(void**)((char*)self + 0);
    if (*(float*)((char*)owner + 0x260) < data_100bd0bc) {
        *(unsigned char*)((char*)self + 0x28) = 1;
        if (checkOwner(*(void**)((char*)self + 0)) != 0) {
            fn_030ea2cc(self);
        }
    } else if (*(unsigned char*)((char*)self + 0x28) != 0 && checkOwner(owner) != 0) {
        fn_030ea2cc(self);
    }
}
