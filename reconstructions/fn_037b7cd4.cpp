namespace {
struct Selection {
    unsigned char prefix[16];
    unsigned short current;
    unsigned short previous;
    unsigned short pending;
};
}

extern "C" void fn_037b7cd4(void* receiver, unsigned short index) {
    Selection* fields = static_cast<Selection*>(receiver);
    const unsigned short previous = fields->current;
    fields->current = index;
    fields->previous = previous;
    fields->pending = 0xffff;
}
