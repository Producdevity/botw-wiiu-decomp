extern "C" void fn_0324f788(void*, void*);
extern "C" int data_1046d618;
extern "C" void fn_02e3e770(void* self)
{
    if (data_1046d618 != 0 && *(int*)((char*)data_1046d618 + 0x1C) == 0) {
        fn_0324f788((void*)data_1046d618, *(void**)((char*)self + 0x1C));
        int* mode = (int*)((char*)self + 0x28);
        *mode = 0x20;
    }
}
