extern "C" bool fn_02f099fc(void* context);

extern "C" bool fn_02f27ce4(void* object) {
    return fn_02f099fc((char*)object + 20);
}
