extern "C" char* fn_03a7a528(void* context, unsigned index) {
    char* object = static_cast<char*>(context);
    switch (index) {
    case 0: return object + 88;
    case 1: return object + 108;
    case 2: return object + 128;
    case 3: return object + 148;
    default: return 0;
    }
}
