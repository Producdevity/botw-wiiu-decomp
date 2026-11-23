extern "C" void fn_0308e6d4(void* memory);

struct OwnedBuffer {
    int size;
    int capacity;
    void* data;
};

extern "C" void fn_0308ead0(OwnedBuffer* buffer) {
    if (buffer->data != 0) {
        fn_0308e6d4(buffer->data);
        buffer->data = 0;
        buffer->size = 0;
        buffer->capacity = 0;
    }
}
