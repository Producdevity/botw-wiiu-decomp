namespace {
struct Owner {
    char padding_0[0x470];
    int id1;
    int id2;
    int id3;
    unsigned char kind1;
    unsigned char kind2;
    unsigned char kind3;
};
}

extern "C" void fn_03ca28b4(void* self, int kind, int id, unsigned int slot) {
    switch (slot) {
    case 1:
        if (static_cast<Owner*>(self)->kind1 == 0xFF || kind == 0xFF) {
            static_cast<Owner*>(self)->kind1 = kind;
        }
        if (static_cast<Owner*>(self)->id1 == -1 || id == -1) {
            static_cast<Owner*>(self)->id1 = id;
            return;
        }
        return;
    case 2:
        if (static_cast<Owner*>(self)->kind2 == 0xFF || kind == 0xFF) {
            static_cast<Owner*>(self)->kind2 = kind;
        }
        if (static_cast<Owner*>(self)->id2 == -1 || id == -1) {
            static_cast<Owner*>(self)->id2 = id;
            return;
        }
        break;
    case 3:
        if (static_cast<Owner*>(self)->kind3 == 0xFF || kind == 0xFF) {
            static_cast<Owner*>(self)->kind3 = kind;
        }
        if (static_cast<Owner*>(self)->id3 == -1 || id == -1) {
            static_cast<Owner*>(self)->id3 = id;
            return;
        }
        break;
    }
}
