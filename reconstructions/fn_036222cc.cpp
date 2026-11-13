inline void clear_word(unsigned* value) { *value=0; }
extern "C" void fn_036222cc(unsigned char* object) {
    unsigned* values = reinterpret_cast<unsigned*>(object + 224);
    for (unsigned i = 0; i < 9; ++i)
        clear_word(values + i);
}
