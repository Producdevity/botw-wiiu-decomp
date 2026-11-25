struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void*);
extern "C" unsigned char data_1045cc14[];

extern "C" void fn_03fedf9c(void* self, int first, int second, int third)
{
    if (self == 0) {
        void** allocator = *(void***)((char*)*fn_0434d168(data_1045cc14) + 0x2c);
        self = (*(void* (**)(void**, int))((char*)*allocator + 0x14))(allocator, 12);
        if (self == 0)
            return;
    }
    *(int*)self = first;
    *(int*)((char*)self + 4) = second;
    *(int*)((char*)self + 8) = third;
}
