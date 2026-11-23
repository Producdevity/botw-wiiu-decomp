typedef void (*Method)(void*, int);

extern "C" void fn_03c1596c(void* list, void* entry);

extern "C" void fn_03c4434c(void* owner, void* entry) {
    *(int*)((char*)entry + 0x214) = 0;
    if (entry != 0) {
        (*(Method*)((char*)*(void**)((char*)entry + 0x21C) + 0xC))(entry, 2);
        fn_03c1596c((char*)owner + 8, entry);
    }
}
