struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void*);
extern "C" unsigned char data_1045cc14[];

extern "C" void fn_0409a028(int size)
{
    void** allocator = *(void***)((char*)*fn_0434d168(data_1045cc14) + 0x2C);
    void (*allocate)(void**, int) = *(void (**)(void**, int))((char*)*allocator + 0x14);
    if (data_1045cc14) {
        allocate(allocator, size);
    }
}
