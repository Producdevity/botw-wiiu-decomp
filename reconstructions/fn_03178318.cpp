struct Opaque_03178318 {
    unsigned int count;
    unsigned int capacity;
    void** items;
};

extern "C" void* fn_03178318(const Opaque_03178318* array, unsigned int index) {
    if (index < array->count)
        return array->items[index];
    return 0;
}
