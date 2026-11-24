extern "C" void fn_03a3f360(void*, void*);
extern "C" void fn_03c457e8(void*, unsigned char);
extern "C" float data_1035d3f8;
extern "C" void fn_03a3bdc8(void* self)
{
    fn_03c457e8(self, 0);
    *(float*)((char*)self + 0x2C) = data_1035d3f8;
    if (*(int*)((char*)self + 0x24) != 0) {
        void* target = *(void**)(*(char**)((char*)self + 0x34) + 0x4C);
        fn_03a3f360(target, self);
    }
}
