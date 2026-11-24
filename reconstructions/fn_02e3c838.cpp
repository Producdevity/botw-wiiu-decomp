extern "C" void fn_02e3c600(void*, void*);
extern "C" int data_1046d618;
extern "C" void fn_02e3c838(void* self)
{
    if (data_1046d618 != 0 && *(int*)((char*)data_1046d618 + 0x1C) == 0) {
        fn_02e3c600(self, *(void**)((char*)self + 0x20));
        char* object = (char*)self;
        *(int*)(object + 0x28) = 0xF;
    }
}
