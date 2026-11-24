struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void*);
extern "C" unsigned char data_1045cc14[];
extern "C" void fn_040dee18(int count)
{
    void** allocator = *(void***)((char*)*fn_0434d168(data_1045cc14) + 0x2C);
    int size = count * 8;
    void (*allocate)(void**, int) = *(void (**)(void**, int))((char*)*allocator + 0x14);
    allocate(allocator, size);
}
