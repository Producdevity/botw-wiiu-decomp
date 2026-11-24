
extern "C" void fn_030b946c(void* self)
{
    void** first = *(void***)((char*)self + 0);
    (*(void (**)(void**, void**))((char*)*first + 0xE4))(first, *(void***)((char*)self + 4));
    void** second = *(void***)((char*)self + 4);
    (*(void (**)(void**))((char*)*second + 0x34))(*(void***)((char*)self + 4));
}
