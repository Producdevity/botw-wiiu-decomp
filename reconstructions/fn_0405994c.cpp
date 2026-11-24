struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void*);
extern "C" unsigned char data_1045cc14[];
extern "C" void fn_0405994c(int pointer)
{
    if (pointer != 0) {
        void** allocator = *(void***)((char*)*fn_0434d168(data_1045cc14) + 0x2C);
        char* vtable = (char*)*allocator;
        void (*release)(void**, int, int) = *(void (**)(void**, int, int))(vtable + 0x1C);
        release(allocator, pointer, 0x200);
    }
}
