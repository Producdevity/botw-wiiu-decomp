namespace { struct Object { unsigned char padding[56]; unsigned char ready; }; }
extern "C" bool fn_02b628fc();
extern "C" void fn_0292f348(void* context) {
    if (fn_02b628fc())
        static_cast<Object*>(context)->ready = 1;
}
