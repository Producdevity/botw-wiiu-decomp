extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" void fn_033a7030(void*);
extern "C" int data_102a9de4;

extern "C" void* fn_032d672c(void* self, const void* source)
{
    if (self != 0 || (self = fn_0308e578(0x80)) != 0) {
        fn_037b7cf0(self, source);
        char* list = (char*)self + 0x20;
        *(int**)((char*)self + 0xC) = &data_102a9de4;
        if (list != 0 || (list = (char*)fn_0308e578(0xC)) != 0) {
            *(int*)(list + 0) = 0;
            *(int*)(list + 4) = 0;
            *(int*)(list + 8) = 0;
        }
        fn_033a7030((char*)self + 0x2C);
        *(int*)((char*)self + 0x7C) = 0;
    }
    return self;
}
