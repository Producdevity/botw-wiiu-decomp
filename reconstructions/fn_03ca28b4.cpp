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

extern "C" void fn_03ca28b4(void* arg0, int arg1, int arg2, unsigned int arg3) {
    
    switch (arg3) {
    case 1:
        if (((Owner*)arg0)->kind1 == 0xFF || arg1 == 0xFF) {
            ((Owner*)arg0)->kind1 = arg1;
        }
        if (((Owner*)arg0)->id1 == -1 || arg2 == -1) {
            ((Owner*)arg0)->id1 = arg2;
            return;
        }
        return;
    case 2:
        if (((Owner*)arg0)->kind2 == 0xFF || arg1 == 0xFF) {
            ((Owner*)arg0)->kind2 = arg1;
        }
        if (((Owner*)arg0)->id2 == -1 || arg2 == -1) {
            ((Owner*)arg0)->id2 = arg2;
            return;
        }
        break;
    case 3:
        if (((Owner*)arg0)->kind3 == 0xFF || arg1 == 0xFF) {
            ((Owner*)arg0)->kind3 = arg1;
        }
        if (((Owner*)arg0)->id3 == -1 || arg2 == -1) {
            ((Owner*)arg0)->id3 = arg2;
            return;
        }
        break;
    }
}
