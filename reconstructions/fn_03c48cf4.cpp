namespace {
struct Buffer {
    unsigned char* bytes;
    const void* dispatch;
    int capacity;
};
}

extern "C" void fn_03c48cf4(const void* receiver) {
    const Buffer* buffer = static_cast<const Buffer*>(receiver);
    unsigned char* bytes = buffer->bytes;
    const int length = buffer->capacity;
    bytes[length - 1] = 0;
}
