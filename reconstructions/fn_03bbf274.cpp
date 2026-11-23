extern "C" void fn_03bbf274(void* object, int value) {
    void* child;
    void* node;

    node = *(void**)((char*)object + 0x40);
    if (node != 0) {
        do {
            child = *(void**)((char*)node + 0x10);
            (*(void (**)(void*, int))((char*)*(void**)((char*)child + 8) + 0x44))(child, value);
            node = *(void**)((char*)node + 8);
        } while (node != 0);
    }
}
